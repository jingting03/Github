#include <stdio.h>
int main(){
	
	int N,i,j,a[500][500];
	scanf("%d",&N);
	
	for (i=0; i<N; i++){
		for (j=0; j<N; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	int n,b[500][500];
	scanf("%d",&n);
	
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	int c=0,k,l,cont; 
	for (i=0; i<N-n+1; i++){
		for (j=0; j<N-n+1; j++){
			if (b[0][0] == 1){

				for (k=0; k<n; k++){
					for (l=0; l<n; l++){
						if (b[k][l] == 1)
						if (a[i+k][j+l] != 1) goto cont;
					}
				}
			}
					c++;
					cont:;
			
		}
	}
	
	printf("%d\n",c);
}
