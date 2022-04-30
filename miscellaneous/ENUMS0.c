#include <stdio.h>

typedef enum month{
    nov, dec, jan, feb, march
} mon;

typedef struct climate{
    int period;
    mon MON_th;
} clm;

int main(){
clm i;

i.MON_th = feb;

printf("%d\n", i.MON_th);
 
return 0;
}