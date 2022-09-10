/*
2022年7月17日15点17分
从1+ ... +100用for循环实现
目的：区别for和while的不同
*/

#include <stdio.h>
int main (){
	int sum = 0;
	int i;
	for (i = 1;i<= 100;++i){          //也可以写成(i = 1;i<101;++i)
		sum += i;
	}
	printf ("sum = %d",sum);
}

/*
  在命令行的输出结果为：
  ----------------------------
  sum = 5050
  ----------------------------
 */

