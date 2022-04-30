#include <stdio.h>

int main(){
    int i, j, prod=1;
    float sum=0.00;
    for(i=1; i<=7; i++){
        for(j=i;j>=1;j--){
            prod *= j;
        }
    sum += (i/prod);
    }
printf("output = %.2f\n", sum);
return 0;
}