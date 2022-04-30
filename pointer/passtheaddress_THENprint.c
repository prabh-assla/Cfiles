#include <stdio.h>

void POINTY(int j, int*i){
    *i = (10*j); //not i = 10*j; that will store value 450 in i but we want to store address of 450 in i 
}

int main(){
    int i=12, j;
    j = i;
    POINTY(i, &j);
    printf("the 10 times of %d is %d\n", i, j);
    return 0;
}