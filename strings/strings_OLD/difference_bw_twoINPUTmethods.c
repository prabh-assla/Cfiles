#include<stdio.h>

int main(){ 
    char *ptr = "prabhdeep";
    // char ptr[] = "prabhdeep"; error giving
    ptr = "tried";
    printf("%s\n", ptr);
    return 0;
}