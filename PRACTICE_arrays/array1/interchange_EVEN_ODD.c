#include <stdio.h>

void reverse(int*ARROW, int i){
    int sum = 0, sum1 = 0, sum2 = 0, sum3 = 0, j, k, l, m = 0, revert[8];

while(m<=i){
    if(*ARROW<0)
    sum3+=-1*(*ARROW);
    else
    sum3+=(*ARROW);
m++;
ARROW++;
}

sum3+=(i+1);
ARROW-=(i+1);

while(sum2<=(i+1)/2){
    if(*ARROW==sum3){
        while(*ARROW==sum3){
            ARROW++;
            sum++;
        }
    }
    else{}

    j = *ARROW;
    l = sum;


    if((*ARROW)%2!=0){
            ARROW++;
                sum++;
                sum1++;

            if(*ARROW==sum3){
            while(*ARROW==sum3){
                ARROW++;
                sum++;
                sum1++; 
            }}
            else{}
if((*ARROW)%2!=0){
            while((*ARROW)%2!=0){
                ARROW++;
                sum++;
                sum1++;
            }}
else{}
        }
    else{
            ARROW++;
                sum++;
                sum1++;

            if(*ARROW==sum3){
            while(*ARROW==sum3){
                ARROW++;
                sum++;
                sum1++; 
            }}
            else{}
if((*ARROW)%2==0){
            while((*ARROW)%2==0){
                ARROW++;
                sum++;
                sum1++;
            }}
else{}
        }

    k = *ARROW;
    revert[sum] = j;
    revert[l] = k;
    *ARROW = sum3;
    ARROW-=sum1;
    *ARROW = sum3;
    ARROW+=sum1;
    ARROW-=sum;

sum = 0;
sum1 = 0;

sum2++;
}

    for(m=0; m<=i; m++){
        *ARROW = revert[m];
        ARROW++;
    }

}

int main(){
    int array[8] = {5, -2, -1, 0, 8, 9, -5, 0}, i;
for(i=0; i<=7; i++){
printf("%d\t", array[i]);
}
    printf("\n");

    reverse(array, 7);

for(i=0; i<=7; i++){
printf("%d\t", array[i]);
}
printf("\n\a");
    return 0;
}