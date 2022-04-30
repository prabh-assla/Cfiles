#include <stdio.h>
#include <stdlib.h>

int main () {
   FILE * p = fopen("poetry.txt", "r");
   int c;
   char buffer [250];

   if( p == NULL ) {
      perror("Error detected!");
      return(-1);
   }
   
   while(!feof(p)) {

      c = getc(p);

      if( c == 'h' )
         ungetc('-', p);

      else
         ungetc(c, p);
   
      fwrite(buffer, sizeof(char), sizeof(buffer), p);
      fputs(buffer, stdout);

   }

   return(0);
}