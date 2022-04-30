#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    printf("type any number\t");
    scanf("%d", &i);
    if(i%2==0)
    goto even;
    else
    printf("it is odd number\n");
    // exit(5);
    //decomment for any odd number

    even :
    printf("even number\n");

    return 0;
}