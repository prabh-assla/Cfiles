#include <stdio.h>

int main(){
 
char txt[32];
sprintf(txt, "%d==%f==%s", 121, 23.45, "to LOOK quite pretty!");

printf("%s\n\a", txt);
 
return 0;
}