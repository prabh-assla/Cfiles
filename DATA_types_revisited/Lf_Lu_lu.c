#include <stdio.h>

int main(){
long double a = 25.345e3;
unsigned b = 25.324e6;

printf("%Lf & %Lu, %lu\n", a, b, b);
    return 0;
}