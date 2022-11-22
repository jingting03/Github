#include <stdio.h>
#include <string.h>
int main(){
	
	char a[10001],c;
	int temp,l,cur=0,w=0,no;
	
	scanf ("%s %d",&a,&temp);

	l = strlen(a);
	
	while (scanf(" %c",&c) != EOF){
		
		if (c == a[cur]){
			if (w>0) goto no;
			cur++;
			printf("%d\n",cur);
			if (cur == l){
				printf("DAISUKI!\n");
				return 0;
			}
		}
		else if (c == '!'){
			w=0;
			cur=0;
			temp-=2;
			if (temp<=0){
				printf("SAYONARA\n");
				return 0;
			}
		}
		else if (c == '/'){
			if (cur>=0){
				if (w>0) w--;
				else if (cur>0) cur--;
			}
			temp--;
			if (temp<=0){
				printf("SAYONARA\n");
				return 0;
			}
	    }
		else{
		no:;
		printf("no\n");
		w++;
	    }
	}
}
