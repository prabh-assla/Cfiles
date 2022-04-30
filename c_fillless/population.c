#include <stdio.h>

int main(){
    int pop = 100000, j;
    for(j=1; j<=10; j+=1){
        pop += pop*0.1;
        printf("year %d has pop. = %d\n", j, pop);
    }
return 0;
}