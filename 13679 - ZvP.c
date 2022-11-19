#include <stdio.h>
int n, max=0, l,a[10][10],q[10][10];
long m = -1e10;
int i,j;
void place (int row, long s)
{
	if (row == n){
		if (s>m){
			m = s;
			//告訴程式是有solution， 是true 的
			max = 1;}
	return;}
    int k;
	for (k=0; k<n; k++)
		if (valid (row,k)){
			//決定取那個位置的值
			//類似Hanoi、的過程
			q[row][k] = 1;
			place (row+1, s+a[row][k]);
			//重啓
			q[row][k] = 0;
		}}

int valid (int row, int col){
	for (i=0; row-i>=0; i++)
	if (q[row-i][col]) return 0;
	for (i=0; row-i>=0 && col-i>=0; i++)
	if (q[row-i][col-i]) return 0;
	for (i=0; row-i>=0 && col+i <n; i++)
	if (q[row-i][col+i]) return 0;
	return 1;
		}

int main(void){

	scanf("%d", &n);

	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
		scanf("%d", &a[i][j]);

	place (0,0);
	printf(max?"%ld\n":"no solution\n", m);}
