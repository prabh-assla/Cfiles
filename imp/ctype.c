#include <stdio.h>
#include <ctype.h>

int main(){
        char ch;
        ch = getch();
printf("\n");
if(islower(ch))
    printf("%c\n", toupper(ch));
if(isupper(ch))
    printf("%c\n", tolower(ch));

 
return 0;
}