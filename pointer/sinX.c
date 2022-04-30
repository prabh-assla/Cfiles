#include <stdio.h>
#include <math.h>

//see the pattern carefully how functions have been used; main contains SINE so
//SINE is written "above it"; SINE contains operation therefore operation function 
//is "above it"

float operation(int y, float x){
    int i;
    float prod1=1, prod2=1, output;
    for(i=1; i<=(2*y-1); i++){
        prod1*=x;
        prod2*=i;
}
output = (prod1/prod2);
return output;
}

float sine(float x, int terms){
    int y;
    float sum = 0;
    for(y=1; y<=terms; y++){
        if(y%2!=0){
            sum+=(1*operation(y, x));
        }
        else{
            sum+=((-1)*operation(y, x));
        }
    }
return sum;
}

int main(){
int terms;
float x, value;
    printf("enter the no of terms - ");
    scanf("%d", &terms);
    printf("enter the value of x - ");
    fflush(stdin);
    scanf("%f", &x);
value = sine(x, terms);

printf("mine value - %.6f VS actual value - %.6f\n", value, sin(x));
    return 0;
}