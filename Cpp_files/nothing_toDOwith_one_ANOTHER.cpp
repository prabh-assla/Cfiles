#include <stdio.h>
	int unite();
	
	int main(){
		int STAND = 44;
		printf("value of integer STAND is %d\n", STAND);
		unite();
		printf("the two STANDs function independently being inside different functions");
		return 0;
	}
	
	int unite(){
		int STAND = 56;
		printf("value of integer STAND is %d\n", STAND);
		return 0;
	}