#include <stdio.h>
int n;
//因为图片最大也只能画到5
int ms[9], ps[9], is[9], img[407][407];
int draw(x,y,n){
	//结束的条件
	if(!n) return 0;

	for (int i=0; i<ms[n]; i++)
		for (int j=0; j<ms[n]; j++)
	//画中间
			img[x+i][y+j] = 1;
	//画左上角
	draw(x-ms[n-1], y-ms[n-1], n-1);
	//画右上角
	draw(x-ms[n-1], y+ms[n], n-1);
	//画左下角
	draw(x+ms[n], y-ms[n-1], n-1);
	//画右下角
	draw(x+ms[n], y+ms[n], n-1);

	//因为图1和图2是最基本的，所以如果大于2时要画最大正方形的边边角角
	if (n>2){
	//y的部分是考虑双数和单数的情况所以会有-ms[n-2]/2的过程
	//中上
	draw(x-ms[n-2], y+ms[n]/2-ms[n-2]/2, n-2);
	//中下
	draw(x+ms[n], y+ms[n]/2-ms[n-2]/2, n-2);
	//左中
	draw(x + ms[n]/2 - ms[n-2]/2, y - ms[n-2], n-2);
	//右中
    draw(x + ms[n]/2 - ms[n-2]/2, y + ms[n], n-2);
	}

}
int main(){

	scanf("%d",&n);
	//找中间square的大小，边框整体的大小，角落正方形的大小
	for (int i=0; i<=n; i++){
        //1，2，5，12，29中間方塊
        //1，2是最基本的，所以保留i
        //第三個的中間方塊 = 前面中間*2 + 前面中間
        //middle i=2, ms[1]*2 + ms[0]
			//找中间方块的大小
			ms[i] = i<2? i : ms[i-1]*2 + ms[i-2];
			//找角落方块的大小
			ps[i] = ps[i-1] + ms[i-1];
			//找边框的大小，为了在printf时做判断
			is[i] = ps[i]*2 + ms[i];
		}

	draw(ps[n], ps[n], n);
	for (int i=0; i<is[n]; i++)
		for (int j=0; j<is[n]; j++)
	printf(j<is[n]-1?img[i][j]?"#":" ":img[i][j]?"#\n":" \n");

}
