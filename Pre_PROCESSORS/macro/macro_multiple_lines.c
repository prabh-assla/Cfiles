#include <stdio.h>
#define MACRO(x) ({printf("side of square is %u\n", x);\
		area(x);\
		printf("thus area of square is %u\n", area(x));\
})
/* semicolon & dash must after every STATEMENT */   

/* also can't define area(x) (x*x) in line 3. 
SUCH function macros need seperate "define" as in line 8 for area(x) */
 
/* ({ }) --> can be used too in place of { } */
#define area(x) (x*x)

int main(){
	short int x = 4999;
	MACRO(x);
	return 0;
}