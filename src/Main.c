#if defined(__linux__)
#include "/home/codeleaded/System/Static/Library/Toml.h"
#elif defined(_WINE)
#include "/home/codeleaded/System/Static/Library/Toml.h"
#elif defined(_WIN32)
#include "F:/home/codeleaded/System/Static/Library/Toml.h"
#elif defined(__APPLE__)
#error "Apple not supported!"
#else
#error "Platform not supported!"
#endif

int main(){
    Toml yl = Toml_Make("./code/Main.toml");
    
    CStr value0 = Toml_GetCStr(&yl,"monitoring/uptime/history/1/details/issue");
    printf("Value found: '%s'\n",value0);
    
    Boolean value1 = Toml_GetBool(&yl,"api/endpoints/2/auth_required");
    printf("Value found: '%d'\n",value1);

    CStr value2 = Toml_GetCStr(&yl,"users/accounts/active/0/role");
    printf("Value found: '%s'\n",value2);

    Toml_Set(&yl,"users/accounts/active/0/role","imposter");

    Toml_Print(&yl);
    Toml_Save(&yl,"./code/Save.toml");
    Toml_Free(&yl);
    return 0;
}