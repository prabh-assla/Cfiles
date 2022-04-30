#include <stdio.h>

void PRESENCE(char*string, char stem){
    while(*string!='\0'){
        if(*string == stem)
        {printf("yes character is present.\n");
        exit(0);}
        else
        {string ++;
         continue;}}
printf("no, sry it isn't present.\n");
}

int main(){ 
char string[200], stem;
printf("string :\t");
gets(string);
fflush(stdin);
    printf("character you want present if :\t");
    scanf("%c", &stem);
PRESENCE(string, stem);
return 0;
}