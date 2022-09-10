//用for循环实现n！
#include <stdio.h>
int main ()
{
	int n;
	scanf ("%d",&n);
	int fact = 1;
	//int i = 1;
	for (int i = 1;i<=n;i++)
	{
		fact *= i;
	}
	printf ("%d! = %d\n",n,fact);
}