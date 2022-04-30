#include <stdio.h>
#include <math.h>

//see the pattern carefully how functions have been used; main contains SINE so
//SINE is written "above it"; SINE contains operation therefore operation function 
//is "above it"

void operation(int y, float x, float*sum){
    int i;
    float prod1=1, prod2=1, output;
    for(i=1; i<=(2*y-1); i++){
        prod1*=x;
        prod2*=i;
}
output = (prod1/prod2);
if(y%2!=0)
*sum += (1*output);
if(y%2==0)
*sum += (-1*output);
}

void sine(float x, int terms, float*sum){
    int y;
    for(y=1; y<=terms; y++){
            operation(y, x, sum);
        }
}

int main(){
int terms;
float x, sum = 0;
    printf("enter the no of terms - ");
    scanf("%d", &terms);
    printf("enter the value of x - ");
    fflush(stdin);
    scanf("%f", &x);

sine(x, terms, &sum);

printf("mine value - %.6f V/S actual value - %.6f\n", sum, sin(x));

return 0;
}