/*
2022年7月17日15点36分
求回文数
目的：通过这个程序，我了解了学编程一定要试

回文数的定义：
12321
121
45654
*/

#include <stdio.h>
int main (){
	int val;                                  //用来存放需要判断的数字
	int m;
	int sum = 0;
	printf ("请输入需要判断的数字：");
	scanf ("%d",&val);
	m = val;
	while (m){                               //M只要不是0，就会执行，在C语言中0是假，非零是真
		sum = sum*10+m%10;
		m /= 10;
	}
	if (sum == val){
		printf ("Yes");
	}else{
		printf ("No");
	}
}