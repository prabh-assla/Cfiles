#include <stdio.h>
#include <string.h>

/*  Below structure1 and structure2 are same. 
    They differ only in member's alignment */

struct structure1 
{
       int id2;
       int id1;
       char name;
       char c;
       float percentage;
};

struct structure2 
{
       int id1;
       char name;
       int id2;
       char c;
       float percentage;                      
};

int main() 
{
    struct structure1 a;
    struct structure2 b;

    printf("size of INT - %d, CHAR - %d, FLOAT - %d\n", sizeof(int), sizeof(char), sizeof(float));

    printf ("size of structure1 in bytes : %d\n", sizeof(a));
    printf ( "Address of id1        = %u\n", &a.id1 );
    printf ( "Address of id2        = %u\n", &a.id2 );
    printf ( "Address of name       = %u\n", &a.name );
    printf ( "Address of c          = %u\n", &a.c );
    printf ( "Address of percentage = %u\n", &a.percentage );

    printf ("\n\nsize of structure2 in bytes : %d\n", sizeof(b));
    printf ( "Address of id1        = %u\n", &b.id1 );
    printf ( "Address of name       = %u\n", &b.name );
    printf ( "Address of id2        = %u\n", &b.id2 );
    printf ( "Address of c          = %u\n", &b.c );
    printf ( "Address of percentage = %u\n", &b.percentage );
    getchar();

    return 0;
}