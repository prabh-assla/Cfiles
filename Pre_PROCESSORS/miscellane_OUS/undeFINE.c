#include <stdio.h>
#define SOLITUDE 543
#undef SOLITUDE
#define TRUTH 123

int main(){
#ifdef SOLITUDE 
printf("to be in solitude\n");
#ifdef TRUTH
printf("else rest in pieces\n");
#endif
#endif
return 0;}

//inside ifdef & endif everything VANISHES if ifdef is undefined