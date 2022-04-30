#include <stdio.h>

void REVERSE(int *array[5]){
int *REVERSE[5];
REVERSE[0] = array[4];
REVERSE[1] = array[3];
REVERSE[2] = array[2];
REVERSE[3] = array[1];
REVERSE[4] = array[0];
array[5] = REVERSE[5];
} 

int main(){
    int array[5]={12, 23, 34, 45, 56};
    int(*ptr)[5];
    ptr = &array;
    for(int i=0; i<5; i++){
    printf("%d ", array[i]);
    }
    printf("\n");
    
    REVERSE(ptr[5]);

    for(int i=0; i<5; i++){ //inside so i needs to be redefined again
    printf("%d ", *ptr[5]);
    }
    printf("\n");
return 0;
}