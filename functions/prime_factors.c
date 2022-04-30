#include <stdio.h>

int SYNTAX(int NO, int i, int sum);

int main(){
    int num, i, j, prime, NO, sum = 0;
    printf("type any num\t", num);
    scanf("%d", &num);
    for(i=2; i<num; i++){
        if(i==2)
        {
            sum++;
            NO = num;   //how to eat the last star is an error
            SYNTAX(NO, i, sum);
        }
        else
            for(j=2; j<i; j++)
                {if(i%j==0)
                break;
                else 
                if(j!=(i-1))
                continue;
                else
                { 
                    sum++;
                    SYNTAX(NO, i, sum);}
}
}
printf("\n");
return 0;
}

int SYNTAX(int NO, int i, int sum){
    int prime, sum1 = 0;
            prime = i;
        while(NO%prime==0)
        {   if(sum == 1 && sum1 == 0)
            printf("%d ", prime);
            else
            printf("* %d ", prime);
            NO = NO/prime;
            sum1++;
        }
return NO;  
}