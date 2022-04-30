#include <stdio.h>

#define lowerify(letter) {letter+=32;\
printf("%c - your OUTPUT\n", letter);}

#define greatify(letter) {letter-=32;\
printf("%c - your OUTPUT\n", letter);}

int main(){

char letter;

    printf("type your letter - ");
    scanf("%c", &letter);
    if(letter>=65 && letter<=90){
    lowerify(letter);}
    else if(letter>=97 && letter<=122){
    greatify(letter);}
    else
    printf("invalid character\n");
    return 0;
}