/* great = n1 > n2 ? ( n1 > n3 ? n1 : n3 ): ( n2 > n3 ? n2: n3 ); 
for 3 numbers case */
#include <stdio.h>

int main(){
	int p, q, r, s, GREAT;
	printf("type any four numbers\n");
	scanf("%d %d %d %d", &p, &q, &r, &s);
	GREAT = p > q ? (p > r ? (p > s ? p : s) : (p > s ? r : (s > r ? s : r))) : 
	(q > r ? (q > s ? q : s) : (r > s ? r : s));
	printf("the greatest number is %d", GREAT);
return 0;
}