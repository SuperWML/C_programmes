/*
2022年7月17日15点24分
使用while函数来实现1+。。。+100
目的：初学while循环
*/
#include <stdio.h>
int main (){
	int i = 1;
	int sum = 0;
	while (i<101){
		sum += i;
		++i;
	}
	printf ("sum = %d",sum);
}
/*
在命令行中的输出结果为：
------------------------------
sum = 5050
------------------------------

总结：for循环和while循环可以互换
执行流程如下：
for (1;2;3)
	A;

等价于

1；
while （2）{
	A；
	3；
}
*/