#include <stdio.h>

int giveTHEint(char*droid){
    char light[11] = "0123456789", 
    *lamp = &light[0];
    int sum = 0;
        while(*lamp != *droid){
            sum++;
            lamp++;
}
return sum;
}

int operation(int*digit){
*digit = 2*(*digit);
    if(*digit>=10){
        *digit-=9;
  }
return *digit;
}

int main(){
char debit_card[17] = "6250941006528599", *digit = &debit_card[0];
    int num[16], i, sum = 0, sum1 = 0;
    
    for(i=0; i<=15; i++){
        num[i] = giveTHEint(digit);
        digit++;
    }

    for(i=0; i<=15; i++){
        printf("%d", num[i]);
    }
printf("\n");

int*pointer = &num[0];

    for(i=0; i<=15; i++){
        if(i%2==0){
            sum += operation(pointer);
}
         else{
             sum1 += *pointer;
}
pointer++;
    }
    
printf("sum - %d + sum1 - %d = %d\n", sum, sum1, sum+sum1);

if((sum+sum1)%10 == 0){
    printf("as summation %d is divisible by 10, it is valid credit ID\n", sum+sum1);
}
else{
    printf("summation %d is not divisible by 10 thus is invalid ID\n", sum+sum1);
}

return 0;
}