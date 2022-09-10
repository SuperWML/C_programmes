/*
2022年7月30日11点19分
使用递减运算符来递减计数器
目的：for循环的其中一种用法
*/

#include <stdio.h>
int main (){
	int secs;
	for (secs = 5;secs>0;secs--){
		printf ("%d seconds!\n",secs);
	}
	printf ("We have ignition!\n");
 	printf ("%d",secs);
	return 0;
}

/*
在命令行中的输出结果为：
-----------------------------------
5 seconds!
4 seconds!
3 seconds!
2 seconds!
1 seconds!
We have ignition!
0
-----------------------------------
*/