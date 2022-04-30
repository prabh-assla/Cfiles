#include <stdio.h>

int main(){
	int hr, PAY = 0;
	printf("type the value of hrs\n");
	scanf("%d", &hr);
	while(hr>=41){
		PAY = PAY + 12;
		hr--;
	}
	printf("the value of overtime_PAY is %d", PAY);
return 0;
} 