/*
2022年7月28日21点47分
判断一个函数是否是素数
目的：了解函数的使用
*/

#include <stdio.h>
int main () {
	int val;
	int i;
	
	scanf ("%d",&val);
	
	for (i = 2;i<val;i++){
		if (val % i ==0)
		break;
	}
	
	if (i==val)
	printf ("Yes!");
	else
	printf ("No!");
}

/*
在命令行中的输出结果为：
------------------------------------
12
No!
16
No!
5
Yes!
------------------------------------
*/