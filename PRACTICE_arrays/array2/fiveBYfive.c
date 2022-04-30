#include <stdio.h>
#include <stdlib.h>

void ROSE(int*point, int i){
     int k, j, l, m, sum = 0, rule;
     for(k=0; k<=i; k++){
    j = *point;
    if(k!=0){
        point-=k;
    }
    for(m=0; m<=i; m++){
        l = *point;
    if(j>=l)
        {sum +=1;
        point++;
        continue;
        }
    if(j<l)
        {sum +=0;
            break;}
    }
    if(sum==(i+1)){
        printf("%d is the largest number\n", j);
        exit(0);
    }
    point-=sum;
    point+=(k+1);
    sum = 0;
    }
}

int main(){
    int arr[5][5] = {{12, -24, -45, 67, 89} , {0, 33, 90, 77, 14} , 
    {111, -732, 7101, -222, 97} , {6, -8, -9, -10101, 97} , {49, 72, -10808, 109298872, 55}};
    ROSE( arr, 24); /* simple arr will also work */
    return 0;
}