/*
2022年7月10日22点19分
1/1到100所有数的和
目的：学习数字的表示形式在C语言中的重要性
*/
#include <stdio.h>
int main (){
	int i;
	double sum = 0;
	for (i= 1;i<= 100;i++){
		sum = sum+1/(double)i;                 //(float)i这种写法是将i由int强制变为float
		//sum = sum +（float）（1/i）这种写法是不对的，因为最终结果会将0转换成float类型
		//更简单的写法：sum = sum+1.0/i；      1.0/i，浮点数/整型，直接变成浮点数
	}
	printf ("sum = %f",sum);                   //flout，double函数必须由%f输出
}
/*
从命令行中的输出结果为：
--------------------------
sum = 5.187378
--------------------------
*/