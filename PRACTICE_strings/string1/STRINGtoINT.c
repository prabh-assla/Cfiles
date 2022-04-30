#include <stdio.h>
#include <math.h>

int main(){
    char charm[7] = "1090602", *droid = &charm[0], light[10] = "0123456789", *lamp = &light[0];
    int sum = 0, plus = 0, i = 6, j;
    while(*droid != '\0'){
        while(*lamp != *droid){
            sum++;
            lamp++;
        }
        j = (int) pow(10, i);
        plus += (sum*j);
        i--;
        lamp -= sum;
        sum = 0;
        droid++;
    }
printf("integer - %d\n", plus);
    return 0;
}