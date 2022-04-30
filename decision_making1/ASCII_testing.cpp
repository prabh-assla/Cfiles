#include <stdio.h>

int main(){
  	int charac;
  	printf("type the value of character\n");
  	scanf("%c", &charac);
  	if((charac<=47 && charac>=0) || (charac<=64 && charac>=58) || (charac<=96 && charac>=91) || (charac<=127 && charac>=123))
  	printf("it is SPECIAL SYMBOL");
  	if(charac<=90 && charac>=65)
  	printf("it is CAPITAL LETTER");
  	if(charac<=122 && charac>=97)
  	printf("it is SMALL LETTER");
  	if(charac<=57 && charac>=48)
  	printf("it is NUMBER DIGIT");
return 0;
}