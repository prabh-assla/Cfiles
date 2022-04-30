#include <stdio.h>

void num(int*straw, int i){
    int j, sum = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, k;
    for(j = 1; j<=i; j++){
        k = *straw;
        if(k<0)
        sum += 1;

        if(k>0)
        sum1 += 1;

        if(k%2 == 0 && k!=0)
        sum2 += 1;

        if(k%2 != 0)
        sum3 += 1;
        
        if(k==0)
        sum4 += 1;
        
        if(j==i)
        {printf("\nnegatives --> %d\n", sum);
        printf("positives --> %d\n", sum1);
        printf("evens --> %d\n", sum2);
        printf("odds --> %d\n", sum3);
        printf("zeroes --> %d\n", sum4);}
straw++;
}
}

int main(){
    int array[10], i;
    for(i=0; i<=9; i++){
        printf("num%d :\t", i+1);
        scanf("%d", &array[i]);
        fflush(stdin);
    }
    num(array, 10);
    return 0;
}