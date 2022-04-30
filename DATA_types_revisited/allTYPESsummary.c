#include <stdio.h>
int main(){
    signed int i1 = 2147483647;
    unsigned int i2 = 4294967295;
    signed long int j1 = 2147483647;
    unsigned long int j2 = 4294967295;
    signed short int k1 = -32768;
    unsigned short int k2 = 65535;
    float l = 3.4e38; //signed, unsigned don't exist for FLOAT, DOUBLE & LONG DOUBLE 
    double m = 1.7e308;
    long double n = -1.7e4932; //-inf in this is coming, WHY?
    printf("i1 = %d\n", i1);
    printf("i2 = %u\n", i2);
    printf("j1 = %ld\n", j1);
    printf("j2 = %lu\n", j2);
    printf("k1 = %d\n", k1);
    printf("k2 = %u\n", k2);
    printf("l = %f\n", l);
    printf("m = %lf\n", m); 
    printf("n = %Lf\n", n);
return 0;
}