#include <stdio.h> 

void xstrcpy ( char *, const char * ) ; 

int main( ) {
char source[ ] = "Sayonara" ; 
char target[ 20 ] ; 
xstrcpy ( target, source ) ; 
printf ( "source string = %s\n", source ) ; 
printf ( "target string = %s\n", target ) ;
return 0 ;
}

void xstrcpy ( char *t, const char *s ) {
while ( *s != '\0' ) {
*t = *s ; s++ ; t++ ;
}
*t = '\0' ;

s = s - 8 ;
*s = 'K' ;                      //error detected since CONST is present

  
}