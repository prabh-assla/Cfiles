#include <stdio.h>

void circular(int*x, int*y, int*z){
    int Q;
    Q = *x;
    *x = *z;
    *z = *y;
    *y = Q;
}

int main(){
    int x=5, y = 8, z=10;
    circular(&x, &y, &z);
    printf("thus, we have x = %d, y = %d & z = %d\n", x, y, z);
return 0;
}