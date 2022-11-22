#include <stdio.h>
int main (){

    int n, q,array[500];
    int i=0;
    scanf("%d",&n);

    for (i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    scanf("%d",&q);

    int l,r;
    for (i=0;i<q;i++){
        scanf("%d %d",&l,&r);

    int m=0,j,k,ans;
    for (j=l-1;j<r;j++){

        int count = 0;
        for (k=l-1;k<r;k++){
            if (array[j] == array[k])
                count++;
        }

        if (count > m){
            m = count;
            ans = array[j];
        }

        if (count == m && array[j]<ans){
            ans = array[j];
        }
        }

    printf("%d\n",ans);
    }
    }
