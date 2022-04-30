#include <stdio.h>

int occuRANCE(char a, char b){
    char vowels[6] = "aeiou", *dow = &vowels[0];
    int sum = 0;
    while(*dow!='\0'){
        if(a == *dow)
        sum++;
        else if(b == *dow)
        sum++;
        else{}
    dow++;
    }
return sum;
}

int main(){
    char sentence[250] = "AEioU", 
    *dow = &sentence[0], a, b, c, d;
    int j;
    
printf("\n");

    while(*dow != '\0'){
        a = *dow;
        dow++;
        b = *dow;
        if(a>=65 && a<=90){
            c = a + 32;
        }
        else{
          c = a;
        }
        if(b>=65 && b<=90){
            d = b + 32;
        }
        else{
          d = b;
        }
    j = occuRANCE(c, d);
    if(j==2 && c!=d){
        printf("%c%c ", a, b);
    }
    else{}

        }
printf("\n");
    return 0;
}