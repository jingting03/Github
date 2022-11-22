#include <stdio.h>
int fib(G0,G1,n){
	int Gn;
	if (n == 0)
	return G0;
	
	else if (n == 1)
	return G1;
	
	else {
		Gn = G0-G1;
		if (n == 2){
			return Gn;
		}
		else 
		return fib(G1,Gn,n-1);
	}
}
int main(){
	int G0, G1, n;
	scanf("%d %d %d",&G0,&G1, &n);
	printf("%d\n",fib(G0,G1,n));
} 
