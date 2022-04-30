# include <stdio.h>

int * fun( ) ;

int main( )
{
    int *j ;
    j = fun() ;
    printf ( "%d\n", *j ) ;
    return 0 ;
}

int *fun( )
{
    int k = 35 ;
    // return ( &k );              //wrong_WAY
    int *j = &k;
    return j;               //right_WAY
}