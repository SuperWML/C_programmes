/*
2022年6月14日20点31分
目的：
	测试%x，%X，%#X的用法
作用:
	更好的理解16进制的输出格式
*/
#include <stdio.h>
int main (){
	int x = 100;
	printf ("%d\n",x);                 //输出结果是64
	printf ("%X\n",x);                //输出结果是0x64
	printf ("%#X\n",x);                //输出的结果是0X64
	printf ("%#x\n",x);                //输出的结果是0x64
	return 0;
}
/*
在命令行界面输出的结果是:
100
64
0X64
0x64
*/
	