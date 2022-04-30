#include<stdio.h>

void sumavg(int a, int b, int *SUM, float *AVG){
    *SUM = a+b; // variable *SUM = address of no a+b
    *AVG = (float)(*SUM)/2;
}

int main(){
    int i=4, j=1, sum;
    float avg;
    sumavg(i, j, &sum, &avg); //address of sum = variable *SUM
    printf("sum = %d &\navg = %f\n", sum, avg);
    return 0;
}