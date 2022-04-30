#include <stdio.h>
int main(){
    int array[]={9, 2, 12, 33, 378, 98, 10, 303, 67};
    int*ptr = &array; //no need of [0]
    printf("address --> %d; number%d = %d\n", ptr, 1, *ptr);
    ptr+=2;
    printf("address --> %d; number%d = %d\n", ptr, 3, *ptr);
return 0;
}