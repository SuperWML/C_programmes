/*
2022年7月20日14点36分
C P P，循环简介，把鞋码转换成英寸
目的：初步学习循环
*/
#include <stdio.h>
#define ADJUST 7.31                     //预定义一个字符常量ADJUST
int main (void){
	const double SCALE = 0.333;         //定义一个double类型的常量SCALE
	double shoe,foot;
	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;
	printf ("Shoe	size	(men s)	foot	length\n");
	printf ("%10.1f	%15.2f	inches\n",shoe,foot);
	return 0;	
}

/*
在命令行中的输出结果为：
--------------------------------------------
Shoe    size    (men s) foot    length
       9.0                10.31 inches
--------------------------------------------
*/