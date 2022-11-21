#include <stdio.h>
long long int c = 0;
 //新的方形数量就是上一个的一个+上一个的9个
int add(int n){
	int i;
  if(n > 0){
	 
    c++;
    for(i = 0; i < 8; i++) 
	    //for 上一个的square加八次
	add(n-1);
  }
}
int main(){
  int n;
  scanf("%d", &n);
  add(n);
  printf("%lld\n", c);
}
