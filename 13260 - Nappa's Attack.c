#include <stdio.h>
int main(){
	
	int N, i,h,k,j;
	
	scanf("%d", &N);

	int o=0;
	for (i=0; i<N; i++){
		for (j=1; j<N-o; j++){
			printf(" ");
		}
		o++;
		for (h=1; h<=o; h++){
			printf("%d",h);
		}
		
		for (k=h-2; k>0; k--){
			printf("%d",k);
		}
		printf("\n");
	} 
} 
