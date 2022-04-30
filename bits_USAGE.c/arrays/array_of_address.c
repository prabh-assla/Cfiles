#include <stdio.h>
int main(){
    int *STRAIN[4], i;
    for(i=1; i<=4; i++)
    STRAIN[i-1] = &i;
    /* for(i=1; i<=4; i++)
    printf("STRAIN[%d] = %u & %d\n", i-1, STRAIN[i-1], *STRAIN[i-1]); */        

    /* above will print address of i=1 only,
    while down will print all addresses from i=1 to i=4 */

    /* STRAIN[i-1] will print one value of address*/
    for(i=1; i<=4; i++){
    printf("STRAIN[%d] = %u & %d\n", i-1, STRAIN[0], *STRAIN[i-1]);
    STRAIN[0]++;
    }
    return 0;
}