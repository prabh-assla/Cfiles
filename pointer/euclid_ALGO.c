#include <stdio.h>

void EUCLID(int*J, int*K){
    int sum1 = *J, sum2 = *K, quot, operation;
    while(sum2 != 0){
    quot = sum1/sum2;
    operation = sum1 - quot*sum2;
    sum1 = sum2;
    sum2 = operation;
    }
/* J = &sum2; (gives value as J = 1980 ------ ERROR) */
    *J = sum1;
}

int main(){
    int J, K;
    printf("type numbers J and K : ");
    scanf("%d%d", &J, &K);
    EUCLID(&J, &K);
    printf("thus we have GCD = %d\n", J);
return 0;
}