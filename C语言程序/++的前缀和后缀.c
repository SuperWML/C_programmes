/*
2022年7月20日21点54分
递增运算符++
目的：了解递增运算符的前缀和后缀模式
*/

#include <stdio.h>
int main (){
	int ultra = 0,super = 0;
	
	while (super < 5){
		super++;
		++ultra;
		printf ("super = %d,ultra = %d\n",super,ultra);
	}
	return 0;
}

/*
在命令行中的输出结果为：
-----------------------------------
super = 1,ultra = 1
super = 2,ultra = 2
super = 3,ultra = 3
super = 4,ultra = 4
super = 5,ultra = 5
-----------------------------------
*/