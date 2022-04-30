#include <stdio.h>

void showbits(unsigned char ch){
    unsigned char j, k, l;
    for(int i=7; i>=0; i--){
        j = i;
        l = 1 << j;
        k = ch & l;
        if(k == 0)
        printf("0");
        else
        printf("1");
    }
printf("\n");
}

int main(){

typedef union x{
    int i;
    unsigned char c[2];
} xxxx;

    xxxx y;
    y.i = 562;
    showbits(y.i);
    printf("%d  %d\n", y.c[0], y.c[1]);
    
return 0;
}