#include <stdio.h>

int main(){
    int yr, salvage = 2000, cost = 6000,
    interest, SOLDABLE_AT, BUYED_AT;

    for(yr=1; yr; yr++){
        interest = (cost*9*yr)/100;
        SOLDABLE_AT = salvage + 1000*yr;
        BUYED_AT = cost + interest;

    printf("yr=%d; sold_at =%d; bought_at=%d\n", yr, SOLDABLE_AT, 
    BUYED_AT);
        
    if(SOLDABLE_AT>BUYED_AT)
    break;

    }

    printf("min years value is given by = %d\n", yr-1);

    return 0;
}