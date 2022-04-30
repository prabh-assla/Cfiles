#include <stdio.h>

int main(){
int i, j;
    for (i=1;i<=300;i++){
        if(i==1||i==2)
        printf("%d\n", i);
            do{
                j=2;
                if(i%j==0)
                break;
                else
                continue;
                printf("%d\n", i);
                j++;
            }while(j<i);
    }
return 0;
}