/*
2022年7月10日01点51分
判断1到100的偶数之和
目的：了解for和if的嵌套使用
*/
#include <stdio.h>
int main (){
	int i;
	int sum = 0;
	for (i= 1;i<=100;++i){
		if (i%2== 0)                           //判断是否为偶数
		sum = sum+i;                           //如果是偶数，则进行求和
	}
	printf ("sum= %d",sum);
}
/*
在命令行中的输出结果为
sum= 2550
*/