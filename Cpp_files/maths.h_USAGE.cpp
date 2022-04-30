#include<stdio.h>
#include<math.h> //imp to include this for using pow(i,2)

int main(){
    int i;
    printf("value of side i is\n");
    scanf("%d", &i);
    printf("value of area of square is %f", pow(i,2));
    return 0;
}