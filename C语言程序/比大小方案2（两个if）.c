//比较数的大小 (两个if) 方案2
#include <stdio.h>
int main (){
	int a,b;
	printf ("请输入两个数：");
	scanf ("%d,%d",&a,&b);
	int max = 0;                    //max的初始化
	if (a>b){
		max = a;
	}
	if (b>a){
		max = b;
	}
	printf ("大的那个是:%d",max);
}