#include <stdio.h>

int main(){
    char letter;
    printf("type any letter among abc\t", letter);
    scanf("%c", &letter);
    switch(letter)
    {
        case 'a' :
        printf("it is a\n");
        break;
        case 'b' :
        printf("it is b\n");
        break;
        case 'c' :
        printf("it is c\n");
        break;
        default :
        printf("letter other than abc\n");
    }
return 0;
}