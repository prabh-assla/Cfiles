#include <stdio.h>

int main(){
    char NAME[6] = {'H','e','L','L','o', 0}, *tip = &NAME[0];
while(*tip != '\0'){
    printf("%c", *tip);
    tip++;
}

    printf("\n");
return 0;
}