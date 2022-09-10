/*
2022年7月17日16点41分
使用do...while来实现一元二次方程
目的：学会使用do...while
*/

#include <stdio.h>
#include <math.h>
int main (){
	double a,b,c;
	double delta;
	double x1,x2;
	char ch;
	do{
	
	printf ("请输入一元二次方程的三个系数：\n");
	printf ("a = ");
	scanf ("%lf",&a);
	
	printf("b = ");
	scanf ("%lf",&b);
	
	printf ("c = ");
	scanf ("%lf",&c);

	delta = b*b - 4*a*c;
	if (delta > 0){
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		printf ("有两个解，x1 = %lf，x2 = %lf\n",x1,x2);
	}else if (0 == delta){
		x1 = x2 =(-b)/(2*a);
		printf ("有唯一解，x1 = x2 = %lf\n",x1);
	}else {
		printf ("无解！");
	}
	
	printf ("您想继续吗？（y或n）");
	scanf (" %c",&ch);          //%c前面必须要加一个空格，原因略
	//以上的计算程序要是没有do...while，就只能计算一次，有了就可以计算多次，但是却无法停止
}while (ch == 'y' || ch== 'Y');      //只要用户输入的是y或者Y就会循环
}

/*
在命令行中的显示结果为：
-----------------------------
请输入一元二次方程的三个系数：
a = 1
b = 5
c = 6
有两个解，x1 = -2.000000，x2 = -3.000000
您想继续吗？（y或n）y
请输入一元二次方程的三个系数：
a = 1
b = 2
c = 3
无解！您想继续吗？（y或n）
-----------------------------

总结:了解do...while的用法，该程序使用do...while实现了最简单的人机交互
*/