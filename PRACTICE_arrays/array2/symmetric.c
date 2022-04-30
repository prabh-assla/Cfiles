#include <stdio.h>
#include <stdlib.h>

void TRANSPOSE(int*dot, int i, int j, int z){
    int k, l, m, n, y=1, sum=0;
    for(int l=0; l<=i; l++){
        for(int k=0; k<=j; k++){
            if(l==k){
            dot++;
            }
            else if(l<k){
                m = *dot;
                dot+=y*z;
                n = *dot;
                if(n!=m){
                    printf("asymmetric matrix\n");
                    exit(0);
                }
                dot-=y*z;
                dot++;
                y++;
            }
            else if(l>k){
                y=1;
                dot+=1;
            }
        }
    }
printf("symmetric matrix\n");
}

int main(){
    int array[4][4] = {{134287, 2, 3, 4}, {2, 657257, 7, 8}, {3, 7, 114362, 12}, {4, 8, 12, 161951}};
            for(int i=0; i<=3; i++){
            for(int j=0; j<=3; j++){
            printf("%d\t", array[i][j]);
            }
            printf("\n");
            }
    TRANSPOSE(*array, 3, 3, 4-1);
    return 0;
}