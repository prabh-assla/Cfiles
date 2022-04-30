#include <stdio.h>
int main(){
    int DEPOSIT[]={12, 223, 89, 18, 91}, i;
    printf("deposits of people are as follows:\n");
    for(i=0; i<=4; i++){
        printf("PERSON %d : %d\n", i+1, DEPOSIT[i]);
    }
    return 0;
}