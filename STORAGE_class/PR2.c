extern int i ; //using STATIC variable i is unaccessible to PR1.c file
int fun1( )
{
i++ ;
printf ( "%d\n", i ) ;
return 0 ;
}
int fun2( )
{
i-- ;
printf ( "%d\n", i ) ;
return 0 ;
}