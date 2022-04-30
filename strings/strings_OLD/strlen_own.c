#include <stdio.h>

int strLEN(char*TURN){
    int j = 0;
    for(int i;;i++){
        if(*TURN=='\0')
        break;
        else
        j++;
        TURN ++;
        }
return j;
} 

int main(){
    char STRING[] = "toPROCESSsomeINFO";
    int i = strLEN(STRING);
  printf("length of string is %d\n", i);
return 0;
}