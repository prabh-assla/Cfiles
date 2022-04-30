#include <stdio.h>
#include <stdarg.h>

void printtify(int tot,...){
    int i;
    va_list ptr;
    va_start(ptr, tot);
    for(i=1; i<=tot; i++){
        printf("%d", va_arg(ptr, int)); 
    }
printf("\n");

va_end(ptr);
}

int main(){
    printtify(4, -7, -8, 97, -345);
return 0;
}