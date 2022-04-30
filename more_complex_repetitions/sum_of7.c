#include <stdio.h>

int main(){
    int i, j;
    float sum=0.00, prod=1.0;
    for(i=1; i<=7; i++){
        for(j=i;j>=1;j--){
            prod *= j;
    }
    sum += (i/prod);
    prod=1.0;
    }
printf("output = %f\n", sum);
return 0;
}