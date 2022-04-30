#include <stdio.h>
#include <stdlib.h>

#define if_large(letter) {if(letter>64 && letter<91)\
printf("uppercase alphabet\n");}

#define if_small(letter) {if(letter>96 && letter<123)\
printf("smallcase alphabet\n");}

#define neitherofTWO(letter) {if(!((letter>64 && letter<91)||(letter>96 && letter<123)))\
printf("not an alphabet\n");}

#define larger(i, j) {if(i>j)\
printf("%d is larger & %d is smaller\n", i, j);}

#define smaller(i, j) {if(j>i)\
printf("%d is larger & %d is smaller\n", j, i);}

#define orCASE(i, j) {if(i==j)\
printf("both are equal numbers\n");}

int main(){
    char letter;
    printf("type the letter - ");
    scanf("%c", &letter);
    if_small(letter);
    if_large(letter);
    neitherofTWO(letter);

    int i, j;
    printf("type any two numbers - ");
    fflush(stdin);
    scanf("%d%d", &i, &j);
    smaller(i, j);
    larger(i, j);
    orCASE(i, j);

return 0;
}


