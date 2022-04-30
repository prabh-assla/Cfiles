#include <stdio.h>

int transformTOint(char*droid){
    char light[10] = "0123456789", *lamp = &light[0];
    int sum = 0;
        while(*lamp != *droid){
            sum++;
            lamp++;
        }
    return sum;
}
/* 
IsBn(int i, int j){
    int k, sum=0, m;
    for(k=0; k<=j; k++){
        m = i%10;
        i = i/10;
        sum+=(k+1)*m;
    }
    
if(sum%11==0)
printf("it is an isbn number\n");
else
printf("it is not an isbn number\n");

} */

int main(){
    char ISBN[11], *pointer = &ISBN[0];
    int i, isbn_num[10], *point = &isbn_num[0], sum=0;
    printf("type ISBN number - ");
    scanf("%s", ISBN);
    for(i=0; i<=8; i++){
        *point = transformTOint(pointer);
        pointer++;
        point++;
    }
    while(*pointer!='/0'){
        sum++;
        pointer++; 
    }
    if(sum==2){
        *point = 10;
    }
    else{
        *point = transformTOint(pointer);
    }
    for(i=0; i<=10; i++){
        printf("%d", isbn_num[i]);
    }
printf("\n");
return 0;
}