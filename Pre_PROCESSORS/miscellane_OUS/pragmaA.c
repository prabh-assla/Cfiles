#include <stdio.h>
void __attribute__((constructor)) fun3();        /* #pragma startup & #pragma exit */
void __attribute__((constructor)) fun2();
void __attribute__((constructor)) fun1();

void __attribute__((destructor)) fun4();
void __attribute__((destructor)) fun5();


void fun1();
void fun2();
void fun3();
void fun4();
void fun5();

int main()
{
printf ( "Inside main\n" ) ;
return 0 ;
}
void fun1()
{
printf ( "Inside fun1\n" ) ;
}
void fun2()
{
printf ( "Inside fun2\n" ) ;
}
void fun3()
{
printf ( "Inside fun3\n" ) ;
}
void fun4()
{
printf ( "Inside fun4\n" ) ;
}
void fun5()
{
printf ( "Inside fun5\n" ) ;
}