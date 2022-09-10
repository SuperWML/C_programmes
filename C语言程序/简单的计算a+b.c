/*
2022年6月21日22点07分
简单的计算a+b
目的：输入任何两个数（a，b），都能算出来
作用：了解scanf函数的作用
*/
#include <stdio.h>
int main (){
	int a=0, b=0;                                //定义变量a，b，并将其初始化为0
	while (~scanf("%d %d",&a,&b)){                //while循环，并且输入a，b的数值，while循环能保证一直输入
		printf ("%d",a+b);                       //输出a+b的值
	}
	return 0;
}