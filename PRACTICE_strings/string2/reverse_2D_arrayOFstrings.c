#include <stdio.h>

void reversal(char *flag, int m, int i){
int sum = 0, sum1 = 0;
char k, l;
    while(m>=0){

while(*flag != '\0'){
flag++;
sum++;}
            sum1 = sum/2-1;

flag-=sum;
    while(sum != 0){
            k = *flag;
            flag+=sum-1;
            l = *flag;
            *flag = k;
            flag-=sum-1;
            *flag = l;

sum-=2;
if(sum!=0)
    flag++;
else{}

if(sum==1){
    sum1++;
    break;}
else{}
}
            flag-=sum1;

    while(*flag != '\0'){
        printf("%c", *flag);
    flag++;
    }
    while(*flag == '\0')
    flag++;

                sum = 0;
                sum1 = 0;
                m--;
    printf("\n");
}

}

int main(){

    char strings[3][67] = {
        "t    rying TO",
        " be ",
        "    PerF              ect.        "
    };

reversal(strings, 2, 66);

printf("\n");
    return 0;
}