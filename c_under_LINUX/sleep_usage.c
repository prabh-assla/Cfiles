#include<stdio.h>
#include <unistd.h>

void pattern1(int rows){

    int i, j;

   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }

}
void pattern2(int rows){
 
    int i, j;

  for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }

}
void pattern3(char input){
    
    int i, j;

   char alphabet = 'A';
   for (i = 1; i <= (input - 'A' + 1); ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }

}

int main(){

   printf("\e[1;1H\e[2J");

   for(int i=0; i<=1; ++i){

   sleep(1);
   pattern1(7);
   printf("\e[1;1H\e[2J");
   printf("%c[%d;%df", 0X1B, 1, 1);

   sleep(1);
   pattern2(7);
   printf("\e[1;1H\e[2J");
   printf("%c[%d;%df", 0X1B, 1, 1);

   sleep(1);
   pattern3('G');
   printf("\e[1;1H\e[2J");
   printf("%c[%d;%df", 0X1B, 1, 1);

}
   return 0;

}