#include <stdio.h>

void ROMAN(int YR); 

int main(){
    int year;
    printf("type the value of yr\t");
    scanf("%d", &year);
    printf("thus roman equivalent of yr = ");
    ROMAN(year);
    return 0;
}

void ROMAN(int YR){
    int I=1, four=4, V=5, nine=9, X=10, L=50, C=100, D=500, M=1000, j;

                {
            for(j=(YR-YR%M)/M; j>=1; j--){
                printf("M");
            YR = YR%M;
            }
                }
                {
            for(j=(YR-YR%D)/D; j>=1; j--){
                printf("D");
                YR = YR%D;
            }
                }
                 {
            for(j=(YR-YR%C)/C; j>=1; j--){
                printf("C");
                    YR = YR%C;
            }
                }
                {
            for(j=(YR-YR%L)/L; j>=1; j--){
                printf("L");
                    YR = YR%L;
            }
                }
                  {
            for(j=(YR-YR%X)/X; j>=1; j--){
                printf("X");
                    YR = YR%X;
            }
                }
                 {
            for(j=(YR-YR%nine)/nine; j>=1; j--){
                printf("IX");
                    YR = YR%nine;
            }
                }
              {
            for(j=(YR-YR%V)/V; j>=1; j--){
                printf("V");
                    YR = YR%V;
            }
             {
            for(j=(YR-YR%four)/four; j>=1; j--){
                printf("IV");
                    YR = YR%four;
            }
                }
                }
             {
            for(j=YR; j>=1; j--){
                printf("I");
            }
            printf("\n");
                }
}