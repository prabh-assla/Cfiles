#include <stdio.h>

void ascending(int*sort, int i){
    int j, k, l, sum = 0, ascend[11];

    for(j=0; j<=i; j++){
        sort+=j;
        k = *sort;
        sort-=j;
        
        for(l=0; l<=i; l++){
        if(k>(*sort))
        sum+=1;
        else{}
        sort++;
        }
        
        ascend[sum] = k;
        sort-=(i+1);
        sum = 0;
  }

for(j=0; j<=i; j++){
    *sort = ascend[j];
    sort++;
}
}

int main(){
    int array[11] = {4, 400, 44, -101, -11, 23, 0, -1, 1001, -9890, 9}, i, j = 10;

    ascending(array, j);

for(i=0; i<=j; i++){
    printf("%d  ", array[i]);
}
   printf("\n");

    return 0;
}