#include <stdio.h>

int main(){
    int i, j, k;
    for (i=1; i<=500; i+=1)
    for (j=1; j<i; j+=1)
    for (k=1; k<i; k+=1)
    if(i==j*j*j + k*k*k)
    if(j>=k)
    printf("%d being a ramanujan no is expressible in %d, %d pair\n",i, j, k);
return 0;
}