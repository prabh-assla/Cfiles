#include <stdio.h>

int main(){
    int j;
    float i, k;
    for(j=1; j<=6; j+=1){
        for(k=5.5; k<=12.5; k+=0.5){
            i = 2 + (j + 0.5*k);
            printf("%f\n", i);
        }
    }
return 0;
}