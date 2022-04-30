#include <stdio.h>
int main(){
  char NAME[24];
  printf("what is your name, bestie?\t");
  gets(NAME);
  printf("oh! so your name is ");
  puts(NAME);
  puts("Goodbye! bestie");
  return 0;
}