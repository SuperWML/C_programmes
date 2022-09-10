/*
2022年7月28日16点47分
错误的使用=会导致程序无限次重复
目的:了解赋值（=）表达式和判断（==）表达式之间的区别
*/

#include <stdio.h>
int main (){
	long num;
	long sum = 0L;
	int status;
	
	printf ("Please enter an integer to be summed ");
	printf ("(Q to quit):");
	status = scanf ("%ld",&num);                  
	
	while (status = 1){                          //这里把1赋值给status，
	                                             //会导致while循环一直成立
		sum = sum+num;
		printf ("Please enter next integer (q to quit):");
		status = scanf ("%ld",&num);
	}
	
	printf ("Those integers sum to %ld.\n",sum);
	return 0;
}

/*
在命令行中的输出结果为：
----------------------------------
程序一直重复，要注意=和==的使用
----------------------------------
*/