#include <stdio.h>

int FREQ(char*string, char stem){
int j = 0;
    while(*string!='\0'){
        if(*string == stem)
        j+=1;
        string ++;
    }
return j;
}

int main(){ 
char string[200], stem;
printf("string :\t");
gets(string);
fflush(stdin);
    printf("character you want frequency of :\t");
    scanf("%c", &stem);
int j = FREQ(string, stem);
printf("frequency of character is %d\n", j);
return 0;
}