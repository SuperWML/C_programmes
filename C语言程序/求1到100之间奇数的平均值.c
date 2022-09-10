/*
求1到100之间奇数的平均值
*/
#include <stdio.h>
int main (){
	int i;                      //设置应用于循环的变量i
	int sum = 0;                //设置和值sum，并设定初始值为0
	int count = 0;              //定义计数器
	double avg;                 //定义double类型的变量avg
	for (i = 1;i<= 100;++i){
		if(i%2== 1){            //判断是否为奇数
		sum = sum+i;
		++count;
		}                 
	}
	avg= 1.0* sum/ count;       //1.0*，用最简单的方法将sum/count转变成浮点数
	printf ("avg = %f",avg);
}
/*
在命令行中的输出结果如下：
-------------------------------
avg = 50
-------------------------------
*/