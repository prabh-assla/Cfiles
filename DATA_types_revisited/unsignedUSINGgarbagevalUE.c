# include <stdio.h>
int main( )
{
unsigned char ch ;
for ( ch = 0 ; ch <= 254 ; ch++ )
printf ( "%d %c\n", ch, ch ) ;
printf ( "%d %c\n", ch, ch ) ; /* garbage value of DEL pushed in 'ch' SINCE only that is 
now left within the memory and all others have been consumed*/
return 0 ;
}
//for unsigned character!