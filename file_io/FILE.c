#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ptr;
    ptr = fopen("hello_WORLD.c", "r");
    while(1){
    char rtp = fgetc(ptr);
    if(rtp != EOF)
        printf("%c", rtp);
    else
        break;
    }
    fclose(ptr);
return 0;
}