#include<stdio.h>
int main()
{
	int x;
	int one,two,five;
	scanf ("%d", &x);
	for (one = 1; one < x * 10; one++)
	{
		for (two = 1; two < (x * 10) / 2; two++) 
		{
			for (five = 1; five < (x * 10) / 5; five++) 
			{
				if (one + two * 2 + five * 5 == x * 10) 
				{
					printf("可以用%d个一角加%d个二角加%d个五角得到%d元\n", one, two, five, x); \
						goto out;                                        //goto语句开始
				}

			}
		}
	}
out:                                                                                                           //goto语句结束及后面执语句
	return 0;
}
