#include <stdio.h>
#include <string.h>

int main(){
    char *KEY = "EAR", *WORD = "NOSE";
    printf("a negative value of %d has come\n", strcmp(KEY, WORD));
    printf("a positive value of %d has come\n", strcmp(WORD, KEY));
    printf("value of %d has come\n", strcmp(KEY, KEY));

    char *PROVINCE = "earLIKE", *STATE = "noStRilS";
    printf("strncmp = %d\n", strncmp("earLIKE", "earPHONE", 3));
    printf("stricmp = %d\n", stricmp("pRomQUEEN", "PromqUEEn"));
    printf("strnicmp = %d\n", strnicmp("bruTAL", "bRU_tea", 3));
    return 0;
}