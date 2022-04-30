#include <stdio.h>

int main(){
    int i = 1,j = 2;
    do{
    do{
        if(i==1)
        break;
      else if(i%j==0)
        break;
        j++;
    }while(j<i);
    if(i==j || i==1){
        printf("%d \t", i);
    }
    i++;
    }while(i<=300);
return 0;
}