#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf ("我已经想好了一个1到100的数。");
	do
	{
		printf ("猜猜这个1到100的数字：");
		scanf ("%d",&a);
		count ++;
		if (a>number)
		{
			printf ("你猜的数大了。");
		}
		else if (a<number)
		{
			printf ("你猜的数小了。");
		}
	}
	while (a != number);
	printf ("你用了%d次接猜到了答案。\n",count);
}