#include <stdio.h>

void PRIME(int*arr, int j){
    int k, i, m=2;
    k = *arr;
    for(i=k; i<=(j+1); i++){
        while(i*m<=(j+1)){
            while(*arr<=100){
                if((i*m)==(*arr))
                *arr=0;
                arr++;
            }
            arr-=99;
            m++;
        }
    m = 2;
}

arr-=1;
*arr = 0;

for(i=0; i<=99; i++){
    if(*arr!=0)
    printf("%d\n", *arr);
    arr++;
}

}

int main(){
    int num[100], *address = &num[0];
    for(int i=0; i<=99; i++){
        num[i] = i+1;
    }
    address++;
    PRIME(address, 99);
return 0;
}