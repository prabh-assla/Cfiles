#include <stdio.h>

int main() {
	int salary;
	printf("type your salary\n");
	scanf("%d", &salary);
	salary>=40000 ? printf("officer_SR_hod_POST") : (salary>=25000 && salary<40000 ? printf("manager_POST") : (salary>=15000 && salary<25000 ? printf("accountant_POST") : printf("Clerk_post")));
	return 0;
}