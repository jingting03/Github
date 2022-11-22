#include <stdio.h>
#include <stdlib.h>
int main(){

	int n,s,i,j,temp1,temp2,m,c,d,a1,a2;


	scanf("%d",&n);
	char a[n][n];
	scanf(" %d",&s);
	
	scanf("%d %d",&c,&d);
	
	temp1=c;
	temp2=d;
	
	
	for(i = 0; i < n; i++)
    for(j = 0; j < n; j++){
      scanf(" %c", &a[i][j]);
    }
    
	printf("%c",a[c][d]);
	
	int k,l,h,c1,c2,c3,c4,c5,c6,c7,c8,count=0;
	char least,max;
	for (h=0; h<s; h++){
			
			if (count == 0){
			least='z'; 
			for (k=temp1-1, l=temp2-1, m=0; m<3; l++, m++){
			if (k<0 || l<0 || k>=n || l>=n) goto c1;
			if(a[k][l] <= least){
			least = a[k][l];
			a1=k;
			a2=l;
			}
			c1:;
			}  
	
			for (k=temp1, l=temp2-1, m=0; m<1; l++, m++){
			if (k<0 || l<0 || k>=n || l>=n) goto c2;
			if(a[k][l] <= least){
			least = a[k][l];
			a1=k;
			a2=l;
			}
			c2:;
			}
			
			for (k=temp1, l=temp2+1, m=0; m<1; l++, m++){
			if (k<0 || l<0 || k>=n || l>=n) goto c3;
			if (a[k][l] <= least){
			least = a[k][l];
			a1=k;
			a2=l;
	      	}
			c3:;
			}
	
			for (k=temp1+1, l=temp2-1, m=0; m<3; l++,m++){
			if (k<0 || l<0 || k>=n || l>=n) goto c4;
			if(a[k][l] <= least){
			least = a[k][l];
			a1=k;
			a2=l;
	        }
			c4:;
			}
			
			
			if (least == 'a'|| least =='f'||least =='k'||least =='p'||least =='E'||least =='J'||least =='O'||least =='T')
			temp2 -= 1;
			
			else if (least == 'b'||least =='g'||least =='l'||least =='q'||least =='D'||least =='I'||least =='N'||least =='S')
			temp2 += 1;
		
			else if (least == 'c'|| least =='h'||least =='m'||least =='r'||least =='C'||least =='H'||least =='M'||least =='R')
			temp1 -= 1;
		
			else if (least == 'd'||least =='i'||least =='n'||least =='s'||least =='B'||least =='G'||least =='L'||least =='Q')
			temp1 += 1;
			
			else if (least == 'e' ||  least =='j'||least =='o'||least =='t'||least =='A'||least =='F'||least =='K'||least =='P') {
			temp1 = a1;
			temp2 = a2;
			count =1;
			}
			else{
			temp1 = a1;
			temp2 = a2;
			}
			}
			
			else{
			max = 'A';
			for (k=temp1-1, l=temp2-1, m=0; m<3; l++, m++){
			if (k<0 || l<0 || k>=n || l>=n) goto c5;
			if(a[k][l] >= max){
			max = a[k][l];
			a1=k;
			a2=l;
			}
			c5:;
			}  
	
			for (k=temp1, l=temp2-1, m=0; m<1; l++, m++){
			if (k<0 || l<0 || k>=n || l>=n) goto c6;
			if(a[k][l] >= max){
			max = a[k][l];
			a1=k;
			a2=l;
			c6:;
			}
			}
			
			for (k=temp1, l=temp2+1, m=0; m<1; l++, m++){
			if (k<0 || l<0 || k>=n || l>=n) goto c7;
			if (a[k][l] >= max){
			max = a[k][l];
			a1=k;
			a2=l;
		    }
			c7:;
			}
	
			for (k=temp1+1, l=temp2-1, m=0; m<3; l++,m++){
			if (k<0 || l<0 || k>=n || l>=n) goto c8;
			if(a[k][l] >= max){
			max = a[k][l];
			a1=k;
			a2=l; 
			}
			c8:;
			}
	
			
			if (max == 'a'|| max =='f'||max =='k'||max =='p'||max =='E'||max =='J'||max =='O'||max =='T')
			temp2 -= 1;
			
			else if (max == 'b'||max =='g'||max =='l'||max =='q'||max =='D'||max=='I'||max =='N'||max =='S')
			temp2 += 1;
		
			else if (max == 'c'|| max =='h'||max =='m'||max =='r'||max =='C'||max =='H'||max =='M'||max =='R')
			temp1 -= 1;
		
			else if (max == 'd'||max =='i'||max =='n'||max =='s'||max =='B'||max =='G'||max =='L'||max=='Q')
			temp1 += 1;
			
			else if (max == 'e' ||  max =='j'||max =='o'||max =='t'||max =='A'||max =='F'||max =='K'||max =='P') {
			temp1 = a1;
			temp2 = a2;
			count = 0;
			}
			else{
			temp1 = a1;
			temp2 = a2;
			}
			}
			

			if (temp1<0 || temp2<0 || temp1>=n || temp2>=n)
			break;
			
			
			printf("%c",a[temp1][temp2]);
		}
		}
	
