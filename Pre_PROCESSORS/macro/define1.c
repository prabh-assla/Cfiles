#include <stdio.h>
#define PERIMETER(a, b, c) a + b + c
int main(){
    int a, b, c;
    printf("type three SIDE LENGTHS\n");
    scanf("%d %d %d", &a, &b, &c);
if(PERIMETER(a, b, c) == 12)
printf("you've got a 12\n");
else
printf("not what we wanted\n");
    return 0;
}
