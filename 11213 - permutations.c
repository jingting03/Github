#include <stdio.h>
void swap(int *p1, int *p2)
{
	//t是暫存的部分
	int t=*p1;
	*p1=*p2;
	*p2=t;
 }
 void permutation(int a[], int index, int size)
 {	//如果已經弄好4個數就開始printf
 	if (index ==size)
 	{
 		for (int i=0; i<size; i++)
 		printf("%d ",a[i]);
 		printf("\n");
	 }
	else
	{
		for(int j=index; j<size; j++){
			swap(&a[j],&a[index]);
			permutation(a,index+1,size);
			//重啓，找尋第二種排法
			swap(&a[j],&a[index]);
		}
	}
 }
 int main()
 {
 	int n;
	//決定要排幾個數字
 	scanf("%d",&n);
 	int a[n];
	//先確立好原本的a[i]
 	for (int i=0; i<n; i++)
 	a[i] = i+1;
	//呼叫function
 	permutation(a,0,n);
 	return 0;
 }
