#include <stdio.h>
int main(){
    char STRING[15]; //for *STRING 'scanf' is not applicable; you can simply equate it like *STRING = "let it be"
    printf("type your name sir : ");
    scanf("%s", STRING);
    printf("oh your name is %s\n", STRING);
return 0;
}