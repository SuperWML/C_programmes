/*
2022年7月22日23点34分
switch的用法
作用：了解switch的用法
*/

#include <stdio.h>
int main (){
	int val;
	printf ("请输入您要去的楼层:");

	scanf ("%d",&val);
	switch (val){
		case 1:
			printf ("1\n");
		case 2:
			printf ("2\n");
			//break;
		case 3:
			printf ("3\n");
			//break;
		case 4:
			printf ("4\n");
			//break;
		default:
			printf ("NO!\n");
			break;
	}

	return 0;
}

/*
在命令行中的输出结果为：
----------------------------------
1
2
2
3
3
4
4
5
NO!
----------------------------------
*/