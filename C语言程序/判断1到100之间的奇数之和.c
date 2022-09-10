/*
2022年7月10日01点43分
求1到100之间的奇数之和
目的：了解for和if嵌套的用法
*/
#include <stdio.h>
int main (){
	int i;             //设置应用于循环的变量i
	int sum = 0;       //设置和值sum，并设定初始值为0
	for (i = 1;i<= 100;++i){
		if(i%2== 1)                 //判断是否为奇数
		sum = sum+i;                //加值
	}
	printf ("sum = %d",sum);
}
/*
在C语言的输出结果为：
sum = 2500
*/