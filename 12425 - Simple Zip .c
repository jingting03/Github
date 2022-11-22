#include <stdio.h>
#include <string.h>
int main(){
	
    char ch[1001];
    int k,c1,a1,j,d,result;
    float count,r=0,l,z=0,o=0;
    
	    while (scanf("%s", &ch) != EOF) {
        count = 0;
		l=strlen(ch);
        for (j=0; ch[j]!='\0'; j++){
        	a1 = j;
        	result = 0;
        	k=j+1;
        	for (k; ch[k]!='\0';){
        		if (ch[k] != ch[j]) goto c1;
					if (ch[k] == ch[j]){
        			result++;
					k++;
					j++;
		    		}
			}
		c1:;
		if (isdigit(ch[a1])){
			
		printf("%d'%c'",result+1,ch[a1]);
		o=0;
		z=0;
		o=((result+1)/10);
		for (d=o; d>0; d/=10){
			z++;
		}
		count+=(4+z);
		}
		
		else{
		printf("%d%c",result+1,ch[a1]);
		o=0;
		z=0;
		o=((result+1)/10);
		for (d=o; d>0; d/=10){
			z++;
		}

		count+=(2+z);
	    }
		}
		
	
		r = (count/l); 
	
		if (r<1){
		printf("\ncompress rate:%6.3f\n",r);
		}
		else{
		printf("\nthe string can't zip\n"); 
		}

}
}
