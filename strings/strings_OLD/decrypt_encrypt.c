#include <stdio.h>

void encrypt(char*smile){
while(*smile!=0){
    *smile = *smile + 1;
    smile++;
}
*smile = '\0';}

void decrypt(char*smile){
while(*smile!=0){
    *smile = *smile - 1;
    smile++;
}
*smile = '\0';}

int main(){
    char STEM[100];
    printf("type anything for encryption :\t"); 
    gets(STEM);
    encrypt(STEM);
    printf("the encrypted text is :\t%s\n", STEM);
    printf("type anything for decryption :\t"); 
    gets(STEM);
    decrypt(STEM);
    printf("the decrypted text is :\t%s\n", STEM);
    return 0;
return 0;
}