#include <stdio.h>

int main(){
    float tyre = 1256.0812; //float contains 6 decimals towards the right
    printf("3 different ways = \n%f \n%0.3f \n%.5f \n%3.f \n%5.f \n%6.0f \n%5.5f ", 
    tyre, tyre, tyre, tyre, tyre, tyre, tyre);
    return 0;  //one space towards left for %5.f case_ SEE ANS CLEARLY
}