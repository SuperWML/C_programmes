/*
2022年7月10日00点29分
为什么需要循环
目的：了解循环的作用
*/
#include <stdio.h>
int main (){
	int i;
	int sum = 0;
	for (i= 1;i<= 10; ++i){
		sum = sum +i;
	}
	printf ("sum = %d",sum);
}
/*
在命令行中的输出结果为：
sum = 55
*/