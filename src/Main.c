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
    
    CStr value0 = Toml_GetCStr(&yl,"database/replica/hosts/0");
    printf("Value found: '%s'\n",value0);

    Boolean value1 = Toml_GetBool(&yl,"logging/rotation/enabled");
    printf("Value found: '%d'\n",value1);
    
    Toml_Set(&yl,"database/replica/hosts/0","yanis@gmail.com");

    Toml_Print(&yl);
    Toml_Save(&yl,"./code/Save.toml");
    Toml_Free(&yl);
    return 0;
}