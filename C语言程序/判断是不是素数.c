#include <stdio.h>
int main (){
	int x;
	scanf ("%d",&x);
	int i;
	int isPrime = 1;                //isPrime用来判断是不是素数，赋值为1就是素数
	for (i = 2;i<x;i++)
	{
		if (x % i == 0)
		isPrime =0;                //isPrime赋值为0不是素数
	}
	if (isPrime == 1)
	{
		printf ("是素数\n");
	}
	else {
		printf ("不是素数\n");
	}
	return 0;
}