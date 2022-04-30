#include <stdio.h>

void TRANSPOSE(int*dot, int i, int j, int z){
    int TRANS[i+1][j+1], k, l, m, n, y=1;
    for(int l=0; l<=i; l++){
        for(int k=0; k<=j; k++){
            if(l==k){
            TRANS[l][k] = *dot;
            dot++;
            }
            else if(l<k){
                m = *dot;
                dot+=y*z;
                n = *dot;
                TRANS[l][k] = n;
                TRANS[k][l] = m;
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
printf("\n\n");
for(int i=0; i<=3; i++){
        for(int j=0; j<=3; j++){
            printf("%d\t", TRANS[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int array[4][4] = {{1, 2, 3, 4}, {11116, 82, 11, 23}, {33, 73, 181, 12}, {46, 48, 1222, 169}};
    for(int i=0; i<=3; i++){
        for(int j=0; j<=3; j++){
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    TRANSPOSE(*array, 3, 3, 4-1);
    return 0;
}