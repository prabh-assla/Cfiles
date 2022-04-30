#include <stdio.h>
#include <string.h>

int main(){
    char FOOT[40], PRINT[40], shoe;
    int i;
    printf("type any word :\t");
    scanf("%s", FOOT);
    printf("enter another word :\t");
    // for(i=0;;i++){
    //     fflush(stdin);
    //     scanf("%c", &shoe);
    //     if(shoe!='\n')
    //     PRINT[i] = shoe; //not 'shoe'
    //     else
    //     break;
    // }

    // do{fflush(stdin);
    //     scanf("%c", &shoe);
    //     PRINT[i] = shoe;
    //     i++;
    // }while(shoe!='\n');

    while(shoe!='\n'){
        fflush(stdin);
        scanf("%c", &shoe);
        PRINT[i] = shoe;
        i++;
    }

    // PRINT[i-1] = '\0';  //--> removes last ONE character :(
    // printf("thus we have = %d", strcmp(FOOT, PRINT));

/* depends on loops,
FOR loop : st2[i] is right
WHILE, DO WHILE loop : st2[i-1] is right */

    PRINT[i] = '\0';
    printf("thus we have = %d\n", strcmp(FOOT, PRINT));
    printf("the words are : %s & %s\n", FOOT, PRINT);
return 0;
}