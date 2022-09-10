/*
2022年7月10日01点10分
求1到10之间所有的奇数和
目的：了解循环语句是如何工作的
*/
#include <stdio.h>
int main (){
	int i;
	int sum = 0;
	for (i=1;i<10;i+=2){       //i+=2 等价于i=i+2
		sum = sum+1;
		printf("今天我很高兴！\n");
	}
	printf ("%d",i);
}