#include <stdio.h>
int main (void)
{
	int A,B,C,D,E;
	scanf("%d",&A); 
	
	B=A%2;
	C=(A/2)%2;
	D=(A/4)%2;
	E=(A/8)%2;
	
	printf("%d%d%d%d\n",E,D,C,B);
	
	return 0;
}
	
