#include <stdio.h>
#include <stdlib.h>

int main(){ //total letters --> 23;
    char string[27] = "Working with strings is fun", *dot = &string[0], *dork;
    int i, j;
    while(*dot!='\0'){
        printf("%c", *dot);
        dot++;
    }
    printf("\n");
    printf("POSITION - ");
    scanf("%d", &i);
    printf("LETTERS - ");
    fflush(stdin);
    scanf("%d", &j);

    if(j<=28-i){
    dork = &string[i-1];
    while(j>=1){
        if(*dork!=' '){
        j--;
        printf("%c", *dork);}
        dork++;
    }
    printf("\n");
    }

    else{
        printf("number of letters EXCEED the string's range\n");
    }
    return 0;
}