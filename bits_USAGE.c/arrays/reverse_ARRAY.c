#include <stdio.h>

void REVERSE(int*try, int n){ //no need of [] again
    int temp, i;
    for(i=0; i<n/2; i++){
        temp = try[i];
    try[i]= try[n-i-1];
    try[n-i-1] = temp;}
    }

int main(){
    int array[5] ={12, 23, 34, 45, 56};
    /* ptr = &array ~~~~~~
    ptr[5] = &array[5] is wrong ~~~~~~
    same for ptr[] = &array[] ---> stands for [0] ~~~~~~
    */
    for(int i=0; i<5; i++){
    printf("%d ", array[i]);} 
    printf("\n");
    
    REVERSE(array, 5);
    /* no need of ptr[5]-->exist hi nahi karta COUNTING IS FROM 0 TO 4; 
    0-4 ki bhi zaroorat nahi hai (in place of array obviously)*/

    for(int i=0; i<5; i++){ //inside so i needs to be redefined again
    printf("%d ", array[i]);}
    printf("\n");
return 0;
}