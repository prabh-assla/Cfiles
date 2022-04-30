# include <stdio.h>
int main( )
{
signed int i ;
for ( int i = -128 ; i <= 127 ; i++ )
printf ( "%d %c\n", i, i ) ;
return 0 ;
} 
//for signed character!