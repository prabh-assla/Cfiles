#include <stdio.h>
int main(){
    int array[10], i;
    array[0] = 1;
    for(i=0;i<=9;i++){
        array[i+1] = array[i] + 1;
    }
    int sulpha[10];
    for(i=0;i<=9;i++){
        sulpha[i] = 5*array[i];
    }
    printf("table of 5 ----->\n");
    for(i=0;i<=9;i++){
        printf("5 * %d = %d\n", array[i], sulpha[i]);        
    }
return 0;
}