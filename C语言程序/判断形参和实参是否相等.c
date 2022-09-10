/*
2022年8月3日18点20分
检测实参和形参是否是同一个变量
目的：了解函数中的形参和实参是否是同一个变量
*/

#include <stdio.h>
void f (int i){
	i = 6;                //在形参中将i的值变为6
	return ;
}

int main (){
	int i = 99;           //定义实参i
	printf (" i = %d\n",i);
	f (i);                //在函数f中调用i
	printf ("i = %d",i);
}

/*
在命令行中的输出结果为：
--------------------------------------
i = 99
i = 99
--------------------------------------

结论：函数中的形参和实参中的名字一致，也不是一个变量，因为地址不一样

*/