#include <stdio.h>
int a[9][9];
int can(int x, int y, int n){
	// 若横排或竖排有一样的数目就重新开始 
	//若在9宫格内有一样也重新开始 
	for (int i=0; i<9; i++)
	if (a[i][y] == n) return 0;
	for (int i=0; i<9; i++)
	if (a[x][i] == n) return 0;
	for (int i=x/3*3; i<x/3*3+3; i++)
	for (int j=y/3*3; j<y/3*3+3; j++)
	if (a[i][j]== n) return 0;
	return 1; 
}

int find(){
	//因爲這邊find裏面沒有東西所以需要兩個for，前面皇冠的只有一個 
	for (int i=0; i<9; i++)
		for (int j=0; j<9; j++)
		//如果当前位置是空格 
		if (a[i][j] == 0){
			for (int k=1; k<=9; k++){ 
			//放括号是为了确保i，j是一样的 
			if (can(i,j,k)){
				//return 1就执行， return 0 就终止 
				a[i][j] = k;
				//去找下一个， 因为之前赋予的值是对的了那就会继续，而不是回到上一步
				//如果下一个没办法填就现在的值会变成0 
				if (find()) 
				return 1;
				//继续运行试看其他的号码 
				else a[i][j] = 0;
			}
			} 
			//不能填好 
			return 0;
		}
	//完美结束 
	return 1;
}

int main(){
	for (int i=0; i<9; i++)
		for (int j=0; j<9; j++)
		scanf("%d",&a[i][j]);
		// find return 1时就执行 ， return 0就是no solution 
		
		if(find())
		
		for (int i=0; i<9; i++)
		for (int j=0; j<9; j++)
		printf(j<8?"%d ":"%d\n", a[i][j]);
		else printf("no solution\n");
}
