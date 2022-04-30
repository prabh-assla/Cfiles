#include <stdio.h>

int main(){
    char ch[] = "to ", ar[] = "LOOK ", ry[] = "pretty", boy[20];
    sprintf(boy, "%s%s%s", ch, ar, ry);
    printf("%s is_NOT_skill\n", boy);
return 0;
}