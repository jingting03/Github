#include <stdio.h>
int main(){
	
	int H,o=0,j,k,c=0,i,d=0,f=0;
	
	scanf("%d",&H);
	
	for (i=0; i<H; i++){
		for (j=1; j<H-o; j++){
			printf(" ");
		}
		o++;
		
		for (j=1; j<2+c; j++){
			printf("%d", j);
		}
		c++;
		
		for (k=j-2; k>0; k--){
			printf("%d", k);
		}
		printf("\n");
	}
	
	for (i=0; i<H-1; i++){
	for (j=0; j<1+d; j++){
		printf(" ");
	}
	d++;
	
	for (j=1; j<H-f; j++){
		printf("%d",j);
	}
	f++;
	
	for (k=j-2; k>0; k--){
		printf("%d",k);
	}
	printf("\n");
}
	
	
} 
