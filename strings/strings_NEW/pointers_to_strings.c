#include <stdio.h>

int main(){
    char *names[] = {"rama", "indu", "sheetal", "shuba"}, *k;
    printf("%s %s\n", names[0], names[2]);
k = names[0];
names[0] = names[2];
names[2] = k;
    printf("%s %s\n", names[0], names[2]);
    return 0;
}