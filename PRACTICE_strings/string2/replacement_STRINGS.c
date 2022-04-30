#include <stdio.h>

void REPLAcement(char*str, char*str1, char*str2, int i){
int sum = 0, sum1 = 0;
    while(i>=0){
        while(*str != '\0'){
            if(*str == *str1){
                while(*str1 != '\0' && *str == *str1){
                    sum++;
                    str++;
                    str1++;
                }
            if(*str1 == '\0'){
                str1-=sum;
                while(*str2 != '\0'){
                    printf("%c", *str2);
                str2++;
                sum1++;
                }
                str2-=sum1;
            }
            else{
                str-=sum;
                str1-=sum;
                    while(sum>0){
                        printf("%c", *str);
                        str++;
                        sum--;
                    }
            }
            }
                    else{
                    printf("%c", *str);
                    str++;
            }
    sum = 0;
    sum1 = 0;
        }
                        printf("\n");
                        
                        while(*str == '\0')
                        str++;
                        
                        i--;
    }
}

int main(){  
    char *str[] = { 
    "LOVERS PERSONAL  LIFE.",
    "   LOVERS are LOVERS",
    "youLOVERS  needy    fool,   -",
    "their love isn't going to.",
    "affLOVERS ect     your",
    "So, baLOVERSck the back off     .LOVERS"};

char str1[20] = "'", str2[20] = "02348 89";

printf("\n");
    REPLAcement(*str, str1, str2, 5);

return 0;
}