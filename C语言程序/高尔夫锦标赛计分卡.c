/*
2022年7月20日15点06分
高尔夫锦标赛积分卡
目的：了解C的基本赋值运算符
*/

#include <stdio.h>
int main (){
	int jane,tarzan,cheeta;
	cheeta = tarzan = jane = 68;               //三重赋值的顺序是从右向左
	printf ("					cheeta	tarzen	jane\n");
	printf ("First round score 	  %4d 	  %8d 	 %8d\n",cheeta,tarzan,jane);
	return 0;
}

/*
在命令行中的输出结果如下：
------------------------------------
                            cheeta  tarzen  jane
First round score           68          68             68
------------------------------------

结论：在C语言中，三重赋值的顺序是从右向左
*/