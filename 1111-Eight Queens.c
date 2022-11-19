#include <stdio.h>
int NQ, q[100];
void place(int row){
	int j;
	if (row == NQ)
		display();
	else{
		for (j=0; j<NQ; j++){
			if (valid(row,j)){
				q[row] = j;
				place(row+1);
			}
		}
	
}
}
int valid (int row, int col){
	int i;
	for (i=0; i<=row-1; i++){
		if (q[i] == col || q[i] == (col-row+i) || q[i] == (col+row+i))
		return 0;
	}
	return 1;
}

int display(void){
	int i,j;
	for (i=0;i<NQ; i++){
		for (j=0; j<NQ; j++){
			if (q[i] == j) printf("0");
			else printf("X");}
			printf("\n");}
			printf("\n");
			return 0;}

int main(void){

	scanf("%d",&NQ);
	place(0);
	return 0;
}
