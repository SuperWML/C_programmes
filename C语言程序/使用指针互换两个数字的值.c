/*
2022年8月2日00点03分
用指针来互换两个数字的值
目的：更进一步了解指针
*/

#include <stdio.h>
int main (){
	int a,b;
	int *c,*d;
	
	printf ("请输入两个变量的值：");
	scanf ("%d %d",&a,&b);
	
	printf ("现在a的值 = %d，b的值 = %d\n",a,b);
	
	c = &b,d = &a;
	printf ("现在a的值为%d，b的值为%d",*c,*d);
}

/*
在命令行中的输出结果为：
-----------------------------------
请输入两个变量的值：45 54
现在a的值 = 45，b的值 = 54
现在a的值为54，b的值为45
-----------------------------------
测试成功！
*/