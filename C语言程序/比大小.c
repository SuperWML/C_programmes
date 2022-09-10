//比较数的大小
#include <stdio.h>
int main (){
	int a,b;
	printf ("请输入两个数：");
	scanf ("%d %d",&a,&b);
	int max = 0;                    //max的初始化
	if (a>b){
		max = a;
	}
	printf ("大的那个是：",max);
}