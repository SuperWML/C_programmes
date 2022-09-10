/*
2022年7月20日15点43分
演示除法
查看截断的情况，体会整数除法和浮点数除法的区别
*/

#include <stdio.h>
int main (){
	printf ("integer division 5/4 is %d\n",5/4);
	printf ("integer division 6/3 is %d\n",6/3);
	printf ("integer division 7/4 is %d\n",7/4);
	printf ("floating division 7./4. is %1.2f\n",7./4.);
	printf ("mixed division 7./4 is %1.2f\n",7./4);        //这里是浮点型/整型，结果也被切换为浮点型
	return 0;
}

/*
在命令行中的输出结果为：
-----------------------------------
integer division 5/4 is 1
integer division 6/3 is 2
integer division 7/4 is 1
floating division 7./4. is 1.75
mixed division 7./4 is 1.75
-----------------------------------
*/