#include <stdio.h>
#include <ctype.h>

int main(){
	char name[11] = "Rudraksha!";

	memset( name, 'I', 4 );

	printf("%s\n", name);

	int seats[7] = {5, 6, 7, 8, 9, 2, 4};

	memset( seats, -1, sizeof(seats) );

	//memset for int array works only for '0' & '1'

	for(int i=0; i<7; ++i)
		printf("%d ", seats[i]);

	char buffer1[] = "hapziness",
	buffer2[] = "hapviness";

	int a = memcmp( buffer1, buffer2, 4*sizeof(int) );

	printf("\n%d\n", a);

	char buffer11[] = "Geeks",
	buffer22[] = "for Geeks!";

	memcpy( buffer11, buffer22, sizeof(buffer22) );

	printf("%s\n", buffer11);

return 0;
}