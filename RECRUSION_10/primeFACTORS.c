#include <stdio.h>
#include <stdlib.h>

void PRIME (int k, int num){
int i, j, sum = 0;

if(num==1)
exit(0);

if(num==2){
printf("%d\n", num);
exit(0);}

for(i=k; i<num; i++){

    if(i==2){
    while(num%i==0)
    {num = num/i;
    sum++;}
    if (sum!=0)
    {printf("%d\n", i);
    i++;
    PRIME(i, num);}
    else
    {i++;
        PRIME(i, num);}
    }

    if(i!=2)
    {for(j=2; j<i; j++)
                    {if (i%j==0)
                    break;
                    else
                    {if(j != (i-1))
                    continue;
                    else
    {
    while(num%i==0)
    {num = num/i;
    sum++;}
    if (sum!=0)
    {printf("%d\n", i);
    i++;
    PRIME(i, num);}
    else{   
        i++;
        PRIME(i, num);
}}}}}}}
  
int main(){
  int num;
  printf("type any no:\t");
  scanf("%d", &num);
  PRIME(2 , num);
  return 0;
}