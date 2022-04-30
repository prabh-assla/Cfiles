#include <stdio.h>

int main()
{
    ungetc('\n',stdin);
    ungetc('o',stdin);
    ungetc('l',stdin);
    ungetc('l',stdin);
    ungetc('e',stdin);

    printf("%c --\n", ungetc('h',stdin));

    while(putchar(getchar()) != '\n');

    return(0);
}