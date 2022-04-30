#include <stdio.h>
#include <string.h>

int main(){
    char KEY[35], *WORD = "living-life";
    char*keywrd = strcpy(KEY, WORD);
    printf("my motto is \"%s\"\n", keywrd);
    return 0;
}