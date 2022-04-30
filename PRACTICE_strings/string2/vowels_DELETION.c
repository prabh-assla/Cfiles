#include <stdio.h>

void DELETE_allvowels(char *totipy){
    char vowels[11] = "aAeEiIoOuU", *zozipy = &vowels[0];
    int sum = 0;

    while(*totipy != '\0'){
        while(*zozipy != '\0'){
            if(*totipy == *zozipy)
            break;
            else{}
            sum++;
            zozipy++;
        }
    zozipy-=sum;

if(sum == 10)
    printf("%c", *totipy);
else{}

    sum = 0;
    totipy++;
    }
}

int main(){
    char sentence[120] = " AEIOU   vowels are -    aeiou. Make a programme that deletes all of them, printing    VOWEL-LESS sentence.   ";

printf("\n");
    DELETE_allvowels(sentence);

    return 0;
}