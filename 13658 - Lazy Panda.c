#include <stdio.h>
int n,m,c=0,a[1001][1001];
int find (int x, int y, int c){
	
	a[x][y] = c;
	if (a[x+1][y] > c+1 && x+1<n) find (x+1, y, c+1);
	if (a[x-1][y] > c+1 && x-1>=0) find (x-1, y, c+1);
	if (a[x][y+1] > c+1 && y+1<m) find (x, y+1, c+1);
	if (a[x][y-1] > c+1 && y-1>=0) find (x, y-1, c+1);
} 

int main(){
	int sx,sy,ex,ey;
	int i,j;
	
	scanf ("%d %d",&n,&m);
	
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			char k;
			
			scanf(" %c",&k);
			if (k=='S'){sx=i; sy=j;}
			if (k=='M'){ex=i; ey=j;}
			if (k=='o' || k=='^'){a[i][j] = -1;}
			else a[i][j] = n*m+1;
		}
	}
	find (sx, sy, c);
	printf("%d\n",a[ex][ey]);
}
