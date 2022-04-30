# include <stdio.h>
int main( )
{
auto int i = 1 ;//block3
    {
    auto int i = 2 ; //block2
        {
        auto int i = 3 ; //block1
            printf ( "%d ", i ) ;
        }
    printf ( "%d ", i ) ;
    }
printf ( "%d\n", i ) ;
return 0 ;
}