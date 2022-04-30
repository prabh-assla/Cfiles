#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int* a = malloc( sizeof(int) *10 );

    if (!a) return -1; //shows malloc assignment is unsuccess

    for(i=0 ;i<11; ++i)
        a[i] = i+1;

    free(a);

return 0;
}