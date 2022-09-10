/*
2022年7月30日11点47分
将for循环中的第一个表达式改为printf（）
*/

#include <stdio.h>
int main (){
	int num = 0;
	
	for (printf ("Keep entering numbers!\n");  num != 6;)
	scanf ("%d",&num);
	
	printf ("That's the one i want!\n'");
	return 0;
}

/*
在命令行中的输出结果为
-------------------------------
Keep entering numbers!
1
2
3
4
5
6
That's the one i want!
-------------------------------
*/