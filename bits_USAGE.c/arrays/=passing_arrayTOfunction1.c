#include <stdio.h>

void GREAT (int*q, int, int);
void GREATER (int(*q)[4], int, int);
void GREATEST (int[][4], int, int);

int main(){
    int ARRAY[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    GREAT(ARRAY, 3, 4);
    GREATER(ARRAY, 3, 4);
    GREATEST(ARRAY, 3, 4);
    return 0;
}

void GREAT(int*a, int i, int j){
    for(int q=1; q<=12; q++){
        printf("")
    }
}