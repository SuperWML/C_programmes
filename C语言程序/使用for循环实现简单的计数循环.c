/*
2022年7月30日11点12分
使用for循环对一个简单的计数循环的改进
目的:初次使用for循环
*/

#include <stdio.h>
int main (){
	const int NUMBER = 22;
	int count;
	
	for (count = 1;count <= NUMBER;count++){
		printf ("Be my Valentine!  %d\n",count);
	}
	return 0;
}

/*
在命令行中的输出结果为：
-----------------------------------
Be my Valentine!  1
Be my Valentine!  2
Be my Valentine!  3
Be my Valentine!  4
Be my Valentine!  5
Be my Valentine!  6
Be my Valentine!  7
Be my Valentine!  8
Be my Valentine!  9
Be my Valentine!  10
Be my Valentine!  11
Be my Valentine!  12
Be my Valentine!  13
Be my Valentine!  14
Be my Valentine!  15
Be my Valentine!  16
Be my Valentine!  17
Be my Valentine!  18
Be my Valentine!  19
Be my Valentine!  20
Be my Valentine!  21
Be my Valentine!  22
-----------------------------------
*/