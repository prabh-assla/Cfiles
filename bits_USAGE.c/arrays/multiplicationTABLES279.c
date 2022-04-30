#include<stdio.h>
void printTable(int *mulTable, int num, int n, int j){ //all integers in array are called via using *
// mulTable has now got space for 10 integers for mulTable[0], [1] & [2] cases
    printf("The multiplication table of %d is :\n", num);
    for(int i=0; i<n; i++){
        mulTable[i] = num*(i+1);
    }

    for(int i=0; i<n; i++){
        printf("%dX%d = %d --- mulTable[%d][%d]\n", num, i+1, mulTable[i], j, i);
    }
printf("____________________________________________\n____________________________________________\n");
}

int main(){
    int mulTable[3][10];
    printTable(mulTable[0], 2, 10, 0); //note1-> mulTable[0] stands for first row; having 10 integers space
    printTable(mulTable[1], 7, 10, 1);
    printTable(mulTable[2], 9, 10, 2);

    return 0;
}