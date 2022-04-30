#include <stdio.h>

void display(){
    printf("display function has been invoked.\n\n");
}

int main(){
    void (*test)();

    printf(" the address of DISPLAY FUNCTION is %u.\n\n", display);

    test = display;

    (*test)();

return 0;
}