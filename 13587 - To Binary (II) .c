#include <stdio.h>
#include <math.h>
int main(void){
	
	int n, temp,a,temp1,i,array[500];
	array[0]=0;
	scanf("%d",&n);
	
	temp = n;
	a=0;
	while (n>0){
		n = n/2;
		a++;
	}
	
	for (i=0; i<a; i++){
		temp1=(temp/pow(2,i));
		temp1=temp1%2;
		array[i]=temp1;
	}
	
	for (i=i-1; i>0; i--){
	printf("%d",array[i]);
	}
	printf("%d\n",array[0]);
	return 0;
}
