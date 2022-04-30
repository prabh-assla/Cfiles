#include <stdio.h>
int main(){
    char NAME[]= {'P','R','A','B','H','\0'};
    char*letter = NAME;
    while(*letter!='\0'){
        printf("%c", *letter);
    letter++;
    }
printf("\n");
return 0;
}