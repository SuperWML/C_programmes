/*
2022年7月30日11点37分
研究for函数的第三个表达式
目的：研究for函数的第三个表达式
*/

#include <stdio.h>
int main (){
	int x;
	int y = 55;
	for (x = 1;y<=75;y = (++x*5)+50)
	printf ("%10d  %10d\n",x,y);
	return 0;
}

/*
在命令行中的输出结果为：
--------------------------------
        1          55
         2          60
         3          65
         4          70
         5          75
--------------------------------
*/