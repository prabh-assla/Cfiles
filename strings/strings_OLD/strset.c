#include <stdio.h>
#include <string.h>

int main(){
    char PURPLE[64] = "tobehappier";
    printf("%s\n", strset(PURPLE, '*'));
    char iconic[64] = "collateralDAMAGE";
    printf("%s\n", strnset(iconic, '*', 7));
    return 0;
}