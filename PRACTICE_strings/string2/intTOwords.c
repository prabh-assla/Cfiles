#include <stdio.h>

void wordifier(char first, char second){
    char *words[18] = {"one", "two", "three", "four", "five", "six", "seven", "eight",
    "nine", "eleven", "twelve", "thirteen", "forteen", "fifteen", "sixteen",
    "seventeen", "eighteen", "nineteen"},
    *WORDS[9] = {"ten", "twenty", "thirty", "forty", "fifty", "sixty",
    "seventy", "eighty", "ninety"}, j = 48;

    int i = 9, k = 0;

    if(first!='\0' && second != '0'){
        if(first == '1'){
            j++;
            while(j<=57){
            if(second == j)
            {printf("%s  ", words[i]);
            break;}
            else{}
            j++;
            i++;}
        }
    else{
            j+=2;
            k++;
            while(j<=57){
                if(first == j)
                break;
                else{}
                j++;
                k++;
                }
        printf("%s  ", WORDS[k]);
                j-=k;
                k = 0;
            while(j<=57){
                if(second == j)
                break;
                else{}
                j++;
                k++;
                }
        printf("%s  ", words[k]);
        }
    }

    else if(first=='\0' && second != '0'){
        j++;
        while(j<=57){
                if(second == j)
                break;
                else{}
                j++;
                k++;
                }
        printf("%s  ", words[k]);
    }

    else if(first != '\0' && second == '0'){
            if(first != '0'){
                while(j<=57){
                    if(first == j)
                    break;
                    else{}
                    j++;
                    k++;
                }
            printf("%s  ", WORDS[k-1]);
            }
            else{}
        }
    
    else if(first == '\0' && second == '0'){

    }
}

void wordify(char *num, int i){
    char *wooordsss[4] = {"hundred", "thousand", "lakh", "crore"}, first, second;
    int j = 0;
    while(*num != '\0'){
        if(i>2){

        if(i%2 == 0){
        first = *num;
        j=i/2-1;
        i-=2;
        num++;}

        else{
        first = '\0';
        j=i/2;
        i--;}

        second = *num;
        num++;

if(first == '0')
first = '\0';
else{}

        wordifier(first, second);
                            if(first == '\0' && second == '0'){

        }
                            else{
                                printf("%s  ", wooordsss[j]);
                            }
}
                        else{
                            if(i==2)
                            {first = *num;
                            j=i/2-1;
                            i--;
                            num++;
                            wordifier('\0', first);
                            if(first != '0')
                            printf("%s  ", wooordsss[j]);
                            else{
                            }
                            }

                            if(i==1)
                            {if(*num != '0'){
                            first = *num;
                            num++;}
                            else{
                                first = '\0';
                                i--;
                            }
                            second = *num;
                            wordifier(first, second);
                            num++;
                            }
                            
                            if(i==0)
                            {first = *num;
                            wordifier('\0', first);
                            num++;
                            }
                            }
        j = 0;
}
}

int main(){
    char num[10] = "1000289";
    printf("\n");
    wordify(&num[0], 6);
    printf("\n");
return 0;
}