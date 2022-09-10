/*
2022年8月1日19点07分
指针地测试
目的：初步研究指针
*/

#include <stdio.h>
int main (){
	int j;
	int *p;                //p是指针变量，用来存放地址用的
	int i = 3;
	p = &i;                  //p存放了变量i的地址
	printf ("%d",*p);
	j = *p;
	printf ("Yes");
}

/*
由此可以看出，*p表示的是变量i的值，而p是变量i的地址
*/