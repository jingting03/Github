#include <stdio.h>
int main(){
	
	int N,L,i,a[1001],e,j,least,k,l,count=0;
	scanf ("%d %d",&N,&L);
	
	for (i=0; i<N; i++){
		scanf(" %d",&a[i]);
	}
	
	for (i=0; i<N-L+1; i++){
		least = 10000001;
		for (j=i+1,e=0; e<L-2; e++,j++){
		if (a[j]<least){
			least = a[j];
		}
	}
		
		if (a[i]<least && a[i+L-1]<least){
			for (k=0; k<(L-1); k++){
				printf("%d ",a[i+k]);
			}
			for (k; k<L; k++){
				printf("%d\n",a[i+k]);
			}
			count++;
		}
}
	
	if (count == 0){
		printf("Domo\n");
	}
} 
