/*
2022年7月30日11点34分
使用for循环实现几何增长
*/

#include <stdio.h>
int main (){
	double debt;
	for (debt= 100.0;debt<150;debt = debt*1.1){
		printf ("Your debt is now $%.2f.\n",debt);
	}
	return 0;
}

/*
在命令行中的输出结果为：
----------------------------------
Your debt is now $100.00.
Your debt is now $110.00.
Your debt is now $121.00.
Your debt is now $133.10.
Your debt is now $146.41.
----------------------------------
*/