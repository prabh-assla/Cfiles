#include <stdio.h>

int main( )
{

// {
static int i = 1 ;
printf ( "%d\n", i ) ;              //output --> 111; if all in boxes
i = i + 1 ;
// }

// {
// static int 
i = 1 ;
printf ( "%d\n", i ) ;              //output --> 111; if out of boxes
i = i + 1 ;
// }

// {
// static int 
i = 1 ;
printf ( "%d\n", i ) ;
i = i + 1 ;
// }

return 0 ;
}