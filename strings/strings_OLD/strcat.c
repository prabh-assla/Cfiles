#include <stdio.h>
#include <string.h>
int main(){
    char KEY[40] = "always-->", *WORD = "smilingHAPPILY";
    char*keywrd = strcat(KEY, WORD);
    printf("She is \"%s\".\n", keywrd);
    char KEYCHAIN[40] = "always-->", *WORDSWORTH = "smilingHAPPILY";  
    char*keywall = strncat(KEYCHAIN, WORDSWORTH, 6);
    printf("She is \"%s\".\n", keywall);
    return 0;
}