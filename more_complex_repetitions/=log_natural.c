#include <stdio.h>

int main(){
    int i, r, y;
    float j = ((i-1.0)/i), sum=0.00, prod=1.00;
    printf("type the value of any no\n");
    scanf("%d", &i);
    for(r=1; r<=7; r++){
        if (r==1)
        sum+=j;
       if(r!=1){
        for(y=1; y<=r; y++)
        prod*=j;
        sum+=((1.0/2)*prod);
        prod=1.00;}
    }
printf("ln(%d) = %f\n", i, sum);
return 0;
}