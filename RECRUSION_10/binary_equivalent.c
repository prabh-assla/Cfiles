#include <stdio.h>
#include <math.h>

int BINOMIAL(int num, int power, int sum){
    int remain, raise, j;

    if(num!=1)
    {
    remain = num%2;
    num = num/2;
    raise = (int) pow(10,power);
    power++;
    sum += raise*remain;
    j = BINOMIAL(num, power, sum);
    return j;
    }

    if(num=1)
    {
    remain = num%2;
    raise = (int) pow(10,power);
    sum += raise*remain;
    return sum;
    }
}

int main(){
    int num, binary;
    printf("num for finding binomial equivalent of :\t");
    scanf("%d", &num);
    binary = BINOMIAL(num, 0, 0);
    printf("binary equivalent of number = %d\n", binary);
    return 0;
}