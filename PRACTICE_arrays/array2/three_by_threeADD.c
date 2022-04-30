#include <stdio.h>

void ADD(int*poin, int*ter, int i, int j){
    int ARR[3][3], k, l;
    for(k=0; k<=i; k++){
        for(l=0; l<=j; l++){
            ARR[k][l] = *poin + *ter;
            poin++;
            ter++;
        }
    }
    for(k=0; k<=i; k++){
         for(l=0; l<=j; l++){
            printf("%d\t", ARR[k][l]);
        }
    printf("\n");
    }
}

int main(){
    int rose[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 
    weed[3][3] = {{5, 7, 3}, {8, 9, 6}, {11, 19, 1}}, i, j, k;
    for(i=0; i<=2; i++){
            for(j=0; j<=2; j++)
            printf("%d\t", rose[i][j]);
            if(i!=1)
            printf(" \t");
            else
            printf("+\t");
            for( k=0; k<=2; k++)
            printf("%d\t", weed[i][k]);
            if(i!=1)
            printf("\n");
            else
            printf("=\n");
            }
    ADD(*rose, *weed, 2, 2);
    return 0;
}