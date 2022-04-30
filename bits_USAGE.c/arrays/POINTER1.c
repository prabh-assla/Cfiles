#include <stdio.h>
int main(){
    float j = 4.0;
    int i; //use int<4bytes> & float<4>; 1 for char
    float*address = &j;
    for(i=1; i<=8; i++)
    {
    printf("address -> %u & no -> %f\n", address, *address);
    address++;
    }
    return 0;
}