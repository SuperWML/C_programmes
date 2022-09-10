/*
2022年6月29日17点29分
if的范围问题
目的：了解if语句的控制范围
作用：明白了在有{}的情况下if语句只能控制其下面一句
*/
#include <stdio.h>
int main (){
	if (3>2)
	printf ("AAAA\n");
	printf ("BBBB\n");
	if (1>2)
	printf ("CCCC\n");
	printf ("DDDD");
}