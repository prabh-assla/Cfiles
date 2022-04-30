#include <stdio.h>

int main(){
    int static array[5] = {0, 1, 2, 3, 4};
    int *pointy[] = {array, array+1, array+2, array+3, array+4};

printf("%d %d %d %d %d\n", *pointy[0], *pointy[1], *pointy[2], *pointy[3], *pointy[4]);

    return 0;
}