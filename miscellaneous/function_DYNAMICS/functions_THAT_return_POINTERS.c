#include <stdio.h>

//how an "integer pointer" can be returned from a function

int* address(){
    static int i = 88  ;
    return (&i);
}

int main(){
 
    int *p;
    p = address();
    printf("%d\n", *p);
 
return 0;
}