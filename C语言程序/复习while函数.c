/*
2022年7月28日15点56分
重新学习while函数
目的：复习while函数
*/

#include <stdio.h>
int main (){
	long num;
	long sum = 0L;
	int status;
	
	printf ("Please enter an integer to be summed ");
	printf ("(Q to quit):");
	status = scanf ("%ld",&num);                  //如果scanf成功读取到了一个整数，
	                                              //则返回1并赋值给status，
												  //然后将读到的值给num
	
	while (status == 1){                          //判断输入的status是否是数字
		sum = sum+num;
		printf ("Please enter next integer (q to quit):");
		status = scanf ("%ld",&num);
	}
	
	printf ("Those integers sum to %ld.\n",sum);
	return 0;
}

/*
在命令行中的输出结果为：
-------------------------------------
Please enter an integer to be summed (Q to quit):44
Please enter next integer (q to quit):33
Please enter next integer (q to quit):88
Please enter next integer (q to quit):121
Please enter next integer (q to quit):q
Those integers sum to 286.

-------------------------------------
*/