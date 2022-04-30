#include <stdio.h>

void ascending(int*sort, int i){
    int j, k, l, m, sum = 0, sum1 = 0, ascend[11], num[11], *ARROW = &num[0];

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

num[j] = sum;

for(m=0; m<=j; m++){
if(sum==*ARROW)
sum1+=1;
ARROW++;
}
ARROW-=j+1;

            ascend[sum+sum1] = k;
            sort-=(i+1);
            sum = 0;
  }

for(j=0; j<=i-sum1; j++){
    printf("%d  ", ascend[j]);
}
   printf("\n");

}

int main(){
    int array[11] = {4, 400, 44, -101, -11, 23, 0, -1, 1001, -9890, 9};

    ascending(array, 10);

    return 0;
}