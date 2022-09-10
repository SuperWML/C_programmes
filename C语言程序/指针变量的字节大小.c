/*
2022年8月5日21点03分
研究指针变量的字节大小
目的：研究指针变量的大小
*/

#include <stdio.h>
int main (){
	char ch = 'A';
	int i = 99;
	double x = 66.6;
	char *p = &ch;
	int *q = &i;
	double * r = &x;
	
	printf ("%d %d %d",sizeof(p),sizeof(q),sizeof(r));
}