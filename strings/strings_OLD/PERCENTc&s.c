#include <stdio.h>
int main(){
    char REEL[15];
    printf("name of the person making reels\t");
    // scanf("%c", REEL); //wrong 
    scanf("%s", REEL);
    printf("I can't believe it is %c\n", REEL); //BOTH CASE --> garbage values
    printf("I can't believe it is %s\n", REEL); //case1 has first LETTER correct only; case2 fully correct 
return 0;
}