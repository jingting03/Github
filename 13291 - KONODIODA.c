#include <stdio.h>
int main(){
	
	int T,N;
	scanf("%d %d",&T,&N);
	
while (T--){
int k,i,j,row[2049]={0},col[2049]={0},dia[4098]={0},dib[4098]={0},c=0;
	for (i=0; i<N; i++)
		for (j=0; j<N; j++){
			scanf("%d",&k);
			if (k == 255){
			row[i]++;
			col[j]++;
			dia[i+j]++;
			dib[i-j+N-1]++;
			}
		}
	
	
	for (i=0; i<N; i++)
		for (j=0; j<N; j++){
			int a=i+j>=N ? (N-1)*2 - (i+j) +1: i+j+1;
			int b=i-j>0 ? N-(i-j) : N+(i-j);
			if (row[i]==N && col[j]==N && dia[i+j]==a && dib[i-j+N-1]==b) c++;
		}
		printf("%d\n",c);
	}
} 
