/*
2022年7月26日13点56分
定义一个带一个参数的函数
目的：
*/

#include <stdio.h>
void pound (int n);
int main (){
	int times = 5;
	char ch = '!';
	float f = 6.0f;
	
	pound (times);
	pound (ch);
	pound (f);
	return 0;
}

void pound (int n){
	while (n-- > 0){
		printf ("#");
	}
		printf ("\n");
}

/*
在命令行中的输出结果为：
--------------------------------------
#####
#################################
######
--------------------------------------
*/