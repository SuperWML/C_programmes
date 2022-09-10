/*
2022年7月10日01点17分
求1到100之间所有的能被3整除的数字之和
目的：了解for和if的嵌套使用
*/
#include <stdio.h>
int main (){
//	int i;
//	for (i = 1;i<4;++i)
//	printf ("AAAA\n");
//	printf ("BBBB\n");
	int i;
	int sum = 0;
	for (i = 3;i<=10;++i){
		if(i%3==0)           //如果能被3整除,就是对3取余看余数是不是0，作用是判断能否被3整除
		sum = sum+i;
		printf ("sum=%d\n",sum);
	}
}
/*
在命令行之中的输出结果为：
sum=3
sum=3
sum=3
sum=9
sum=9
sum=9
sum=18
sum=18
注：最后一个18没有输出的原因是这个时候的i已经增加成11了
*/