/*
2022年8月4日21点57分
确定一个一维数组需要及格参数
目的：了解指针和数组
*/

#include <stdio.h>
void f(int *pArr,int len){
	pArr[3] = 88;                           //这里pArr[3]等价于*（pArr+3）
}
int main (){
	int a[6] = {1,2,3,4,5,6};
	
	printf ("%d\n",a[3]);
	f(a,6);
	printf ("%d\n",a[3]);
	return 0;
}

/*
在命令行中的输出结果为：
--------------------------------
4
88
--------------------------------
*/