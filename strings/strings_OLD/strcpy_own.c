#include <stdio.h>

void strCPY(char*turn, char*left){
for(int i;;i++){
    if(*left=='\0')
    break;
    else{
        *turn = *left;
        turn ++;
        left ++;}}
*turn = '\0';}

int main(){
    char STRING[] = "toPROCESSsomeINFO", STREAM[60];
    strCPY(STREAM, STRING);
    printf("thus, STREAM = %s\n", STREAM);
return 0;
}