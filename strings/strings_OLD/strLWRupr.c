#include <stdio.h>
#include<string.h>
int main(){
    char LOW[12] = "trYINg", UP[12] = "TruSTWOrthY";
    printf("%s(up)\n", strupr(LOW)); 
    printf("%s(low)\n", strlwr(UP)); 
    return 0;
}