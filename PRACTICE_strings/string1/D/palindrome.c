#include <stdio.h>
#include <stdlib.h>
#include "word.h"

int main(){
    char string[100];
    int i = 0, j = 0;
    printf("STRING :\t");
    scanf("%s", &string);
    while(string[i]!='\0'){
        j+=1;
        i++;
    }
    WORD(string, j);
    return 0;
}