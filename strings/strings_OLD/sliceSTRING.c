#include <stdio.h>

void SLICE(char*ptr, int i, int j){
    int k = 0;
    while(k+(i-1)<=(j-1)){
        ptr[k] = ptr[k+(i-1)]; //note1
        k++;
    }
ptr[i] = '\0'; 
}

int main(){
    char STRING[] = "trippingOVERobstaclesIS_my_religion";
    SLICE(STRING, 8, 15);
    printf("sliced string :\t%s\n", STRING);
return 0;
}