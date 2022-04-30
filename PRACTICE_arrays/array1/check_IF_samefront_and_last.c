#include <stdio.h>
#include <stdlib.h>

void RAISE(int*arr, int i){
   int tulip, j, sum=0;
   for(j=0; j<=i/2; j++){
    tulip = *arr;
    if(j!=0){
        arr-=(j);
    }
    arr+=(i-j-1);
        if(tulip == *arr)
        sum+=1;
        else
        {printf("\nno, it's different\n");
        exit(0);
        }
    arr-=(i-j-1);
    arr+=(j+1);
    }
printf("\nyup, it is same\n");
}

int main(){
    int array[11] = {11, 123, 450, 1200, 11111, 12, 11111, 1200, 450, 123, 11};
    RAISE(array, 11);
    return 0;
}