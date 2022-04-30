#include <stdio.h>
int main(){
 
int i=65, j=998, k=7;

scanf("%d %*d %d", &i, &j, &k); //if input is a, b, c |||| output is a, c, (earlier assigned value{k=7}; thus 7)
printf("%d %d %d\n", i, j, k);
 
return 0;
}