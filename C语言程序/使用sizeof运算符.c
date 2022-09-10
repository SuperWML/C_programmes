/*
2022年7月20日21点06分
使用sizeof运算符
作用：研究sizeof是如何使用的
*/

#include <stdio.h>
int main (){
	int n = 0;
	size_t intsize;
	intsize = sizeof (int);
	printf ("n = %d. n has %zd Bytes; all ints have %zd Bytes.\n",n,sizeof n,intsize);
	return 0;
}

/*
在命令行中的输出结果为
------------------------------
n = 0. n has 4 Bytes; all ints have 4 Bytes.
------------------------------
*/