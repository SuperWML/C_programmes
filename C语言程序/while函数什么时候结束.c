/*
2022年7月28日16点19分
何时终止循环
目的：了解while函数该什么时候终止循环
*/

#include <stdio.h>
int main (){
	int n = 5;
	
	while (n < 7){
		printf ("n = %d\n",n);
		n++;
		printf ("Now n = %d\n",n);
	}
	
	printf ("The loop has finished.\n");
	return 0;
}

/*
在命令行中的输出结果为：
--------------------------------
n = 5
Now n = 6
n = 6
Now n = 7
The loop has finished.
--------------------------------
*/