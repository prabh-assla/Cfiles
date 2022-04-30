#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float SMALLEST(float*arrow, int i){
     int k, m, sum = 0;
     float j, l;
     for(k=0; k<=i; k++){
    j = *arrow;
    if(k!=0){
        arrow-=k;
    }
    for(m=0; m<=i; m++){
        l = *arrow;
    if(j<=l)
        {sum +=1;
        arrow++;
        continue;
        }
    if(j>l)
        {sum +=0;
            break;}
    }
    if(sum==(i+1)){
        return j;
        exit(0);
    }
    arrow-=sum;
    arrow+=(k+1);
    sum = 0;
    }
}

float distance(int*CANDY, int*MAN){
    int i, j, k, l;
    float arr[9], sum = 0;
    for(j=0; j<=9; j++){
    i = *CANDY;
    j = *MAN;
    CANDY-=j;
    MAN-=j;
    for(i=0; i<=8; i++){
        k = *CANDY;
        l = *MAN;
if((int) pow((pow((i-k), 2) + pow((j-l), 2)) , 1/2) == 0){
i-=1;
continue;}
    arr[i] = pow((pow((i-k), 2) + pow((j-l), 2)) , 1/2);
        CANDY++;
        MAN++;
    }
CANDY-=9;
MAN-=9;
CANDY++;
MAN++;
    sum+=SMALLEST(arr, 8);
}
return sum;
}

int main(){
    int x[10] = {3, 7, 1, 9, 182, 14, 18, 2, 6, 8},
    y[10] = {11, 23, 281, 19, 5, 6, 3, 2, 9, 10};
    float sum;
    sum = distance(x, y);
    printf("thus distance between first and last arrow - %f", sum);
return 0;
}