/*
2022年7月24日16点42分
前20个数字的和
目的:了解C语言中简单的语句
*/

#include <stdio.h>
int main (){
	int count,sum;
	count = 0;
	sum = 0;
	while (count++<20){
		sum = sum+count;
	}
	printf ("sum = %d\n",sum);
	return 0;
}