/*
2022年8月3日18点01分
研究指针运算符中的*和变量的性质是不是一样

*/

#include <stdio.h>
int main (){
	int i;
	int *p;
	p = &i;
	if (*p == i)
	printf ("Yes!");
}