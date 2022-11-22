#include <stdio.h>
#include <math.h>
int main(){


 	while(1) {
      int c, sum=0, r, a, temp;
	  if (scanf("%d", &c) == EOF){
    break;
    }

	a=0;

    temp = c;
	while (c>0){
		c = c/10;
		a++;
	}


	c = temp;
	while (c>0){
		r = c%10;
		sum += pow(r,a);
		c = c/10;
	}

	if(sum == temp)
 		printf("Yes it is.\n");
	else
		printf("No it is not.\n");

	}
    }
