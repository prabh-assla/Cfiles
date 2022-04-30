# include <stdio.h>
int main( )
{
char a = 128, b = -129; //ranges --> (-128,127) & (0,255)
printf ( "%d %c\n", a, a) ;
printf ( "%d %c\n", b, b) ;
for(unsigned char i=0; i<=254; i++) //255 is delete; makes loop infinite
printf("%c\t", i);
printf("\n");
for(signed char i=-128; i<=127; i++) //127 is delete; makes loop infinite
printf("%c\t", i);
return 0 ;
}