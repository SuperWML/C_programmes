/*
2022年7月10日22点10分
从1加到100
*/
#include <stdio.h>
int main (){
	int i;
	int sum = 0;
	for (i= 1;i<=100;i++){
		sum = sum+i;
	}
	printf ("sum = %d",sum);
}
/*
从命令行中的输出结果是：
---------------------------
sum = 5050
---------------------------
*/