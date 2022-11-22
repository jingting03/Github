#include <stdio.h>
int main(void){
	
	char a,b,c,d,e,f,g,h,i,j;
	
	scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
	
	f=a-32;
	g=b-32;
	h=c-32;
	i=d-32;
	j=e-32;
	
	printf("%c%c%c%c%c\n",'A'+'Z'-f,'A'+'Z'-g,'A'+'Z'-h,'A'+'Z'-i,'A'+'Z'-j);
	
	return 0;
}
