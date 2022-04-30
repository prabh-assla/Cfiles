#include <stdio.h>
#include <string.h>

void strCPY(char*turn, char*left, int j){
for(int i; i<=j ;i++){
        *turn = *left;
        turn ++;
        left ++;}
} 

int main(){
    char STRING[] = "toPROCESSsomeINFO", STREAM[60];
    strCPY(STREAM, STRING, strlen(STRING));
    printf("thus, STREAM = %s\n", STREAM);
return 0;
}