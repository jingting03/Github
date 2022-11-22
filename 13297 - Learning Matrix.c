#include <stdio.h>
int main(){
	int i,j,h,l,k,m,N,M,n,sum=0;
	scanf("%d %d",&N,&M);
	
	int a[N][M];
	int b[M][N];
	
	for (i=0; i<N; i++){
		for (j=0; j<M; j++){
			scanf(" %d",&a[i][j]);
		}
	}
	
	for (i=0; i<M; i++){
		for (j=0; j<N; j++){
			scanf(" %d",&b[i][j]);
		}
	}
	
	for (h=0,l=0; h<N; h++,l++){
		for (i=0,n=0; n<N; n++,i++){
			for (k=0, j=0,m=0; m<M; k++,j++,m++){
				sum+=((a[i][j])*(b[k][l]));
			}
			if (i<(N-1)){
				printf("%d ",sum);
				sum = 0;
			}
			else{
			printf("%d\n",sum);
			sum=0;
		 }
		}
	}
}
