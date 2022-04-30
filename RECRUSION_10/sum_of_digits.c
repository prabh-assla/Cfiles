#include <stdio.h>

int FIVE(int num, int power, int sum){
    int prod=1, j;

    if(power!=1)
    {for(int i=1; i<power; i++)  
        prod*=10;
            sum += (num/prod);
            num = (num%prod);
        power--;
        j = FIVE(num, power, sum);
    return j;
    }

    if(power==1)
    {
        sum += num;
        return sum;
    }
}

int main(){
    int num = 19218, sum;
    sum = FIVE(num, 5, 0);
printf("thus, sum of digits of number is = %d\n",sum);
return 0;
}