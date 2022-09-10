//比大小方案4，让max = b，最聪明的方案但不容易读
#include <stdio.h>
int main (){
	int a,b;
	printf ("请输入两个整数：");
	scanf ("%d %d",&a,&b);
	int max = b;
	if (a>b){
		max = a;
	}
	printf ("最大的数字是：%d",max);
}
