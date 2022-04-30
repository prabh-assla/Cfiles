#include <stdio.h>

void BRAINLY(int*kinder, int*joy, int i, int j, int k){
    int MULTIPLY[3][3], l, m, n, sum=0, sum1=0, p, q;
    for(l=0; l<=i; l++){
        for(m=0; m<=j; m++){
            for(n=0; n<=k; n++){ 
                sum+=(*kinder)*(*joy);
                if(n!=k){
                kinder++;
                joy+=k+1;
                sum1++;}
            }
            MULTIPLY[l][m] = sum;
            joy-=sum1*(k+1);
            joy++;
            kinder-=sum1;
            sum1 = 0;
            sum = 0;
}
if(l!=i)
kinder+=(k+1);
joy-=(k+1);
}
printf("\n");
    for(p=0; p<=2; p++){
        for(q=0; q<=2; q++){
            printf("%d\t", MULTIPLY[p][q]);
        }
        printf("\n");
    }
}

int main(){
    int MAT[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}}, 
    RIX[3][3]={{9, 8, 7},{6, 5, 4},{3, 2, 1}}, i, j, k;
    for(i=0; i<=2; i++){
            for(j=0; j<=2; j++)
            printf("%d\t", MAT[i][j]);
            if(i!=1)
            printf(" \t");
            else
            printf("*\t");
            for( k=0; k<=2; k++)
            printf("%d\t", RIX[i][k]);
            if(i!=1)
            printf("\n");
            else
            printf("=\n");
            }
    BRAINLY(*MAT, *RIX, 2, 2, 3-1);
    return 0;
}