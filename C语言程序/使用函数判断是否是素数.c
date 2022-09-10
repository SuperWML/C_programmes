/*
2022年7月28日22点10分
使用函数判断一个数是否是素数
目的:了解函数的使用
*/

#include <stdio.h>
#include <stdbool.h>          //能够调用布尔类型
bool f(int val);              //函数的声明
int main (){
	int m;

	
	int b;
	while (scanf ("%d",&b)){
		scanf ("%d",&m);
	if (f(m)){
		printf ("Yes!");
	}else {
		printf ("No!");
	}
}
}

bool f(int val){            //函数的定义
	int i;
	for (i = 2;i<val;i++){
		if (val % i ==0)
		break;
	}
	
	if (i==val)
	return true;
	else
	return false;
}

/*
在命令行中的输出结果为：
----------------------------------------
12
No!
16
No!
5
Yes!
----------------------------------------
*/