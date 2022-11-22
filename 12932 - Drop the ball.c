#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int N,M,i,j,c1,max,c2,max2,c;
	
	scanf("%d %d",&N,&M);
	char a[N][M];
	max = M-1;
	max2 = N-1;
	for (i=0; i<N; i++){
		for (j=0; j<M; j++){
			scanf(" %c",&a[i][j]);
		}
	}
	
	int Q;
	scanf("%d",&Q);
	
	while (Q--){
		scanf("%d",&c);
		j = c-1;
		for (i=0; i<N,i>=0; i++){
			for (j; j<M,j>=0; j++){
				
			if (j==0 && a[i][0]=='/'){
				printf("Left!\n");
				goto c1;
			}
			
			else if (j==max && a[i][j]=='\\'){
				printf("Right!\n");
				goto c1;
			}
			
			else if ((a[i][j] == '\\' && a[i][j+1]=='/') || (a[i][j] == '/' && a[i][j-1]=='\\')){
				printf("Stuck QQ\n");
				goto c1;
			}
			
			else if ((i==max2 && (a[i][j] == a[i][j-1])) || (i==max2 && (a[i][j] == a[i][j+1]))){
				printf("Position: %d\n",j);
				goto c1;
			}
			
			else if (a[i][j] == '\\' && a[i][j+1] == '\\'){
				i++;
			}
			
			else{
				j--;
				goto c2;
				c2;
			}
	}
	c2:;
	}
	c1:;
	}
}
