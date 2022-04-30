#include <stdio.h>

void multiply(int*tree){
    for(int i=0; i<=9; i++){
        *tree = *tree * 3;
        tree++;
    }
}

int main(){
    int craw[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;
    multiply(craw);
    for(i=0; i<=9; i++){
        printf("%d  ", craw[i]);
    }
    printf("\n");
    return 0;
}