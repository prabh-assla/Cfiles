#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *tr;
    tr = fopen("tr.txt", "w");
    int sum = 0;
    char is[20], *IS = &is[0];
    
    printf("type your stringsss ----\t");

    while(1){
        gets(is);
        while(*IS != 0){
            sum++;
            IS++;
        }
  if(sum==0)
{
    fclose(tr);
    exit(0);
}
  else{
      fputs(is, tr);
      fputs("\n", tr);
      fputs("--------------------------------------------------", tr);      
      fputs("\n", tr);
  }
  fflush(stdin);
  IS-=sum;
  sum = 0;
    }

fclose(tr);
return 0;
}