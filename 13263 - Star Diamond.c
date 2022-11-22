#include <stdio.h>
int main(){
	
	int N,o=0,c=0,i,j,k;
	
	scanf("%d", &N);
	
	if (N%2 == 0){
		printf("Stop drawing fake diamonds!\n");
	}
	
	else {
	
	for (i=0; i<(N/2)+1; i++){
		for (j=0; j<(N/2)-o; j++){
			printf(" ");
		}	
		o++;
			
		for (k=0; k<1+c; k++){
			printf("*");
		}
		c+=2;
		printf("\n");
		} 

	
	int n,m,e=1,f=2,l;
	for (l=0; l<(N/2); l++){
		for (m=0; m<e; m++){
		    printf(" ");
	    }
	    e++;
	    
	    for (n=0; n<N-f; n++){
	    	printf("*");
		}
		f+=2;
		printf("\n");
		}
}
}
