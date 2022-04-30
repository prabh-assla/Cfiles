#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main( )
{
	char str1[9] = "aabbccdd";

    printf("The string: %s\n", str1);
    memcpy(str1 + 2, str1, 6);
    printf("New string: %s\n", str1);

/*    printf("The string: %s\n", str1);
    memmove(str1 + 2, str1, 6);
    printf("New string: %s\n", str1);*/

   return 0;
}