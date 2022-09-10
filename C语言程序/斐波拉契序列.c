/*
2022年7月17日16点07分
斐波拉契序列
目的：了解如何看懂一个程序的基本步骤

什么是斐波拉契序列
1 2 3 5 8 13 21 34 55
即为从第二项开始后面的每一项都是前两项的和
*/
#include <stdio.h>
int main (){
	int i;                                     //用来控制项数
	int n;                                     //n用来保存用户想要求的值
	int f1,f2,f3;
	
	f1 = 1;
	f2 = 2;
	
	printf ("请输入您需要求的第N项序列：");
	scanf ("%d",&n);
	if (1 == n){
		f3 = 1;
	}else if (2 == n){
		f3 = 2;
	}else {
		for (i = 3; i<= n;++i){
			f3 = f1+f2;
			f1 = f2;
			f2 = f3;                      //f1 = f2，f2 = f3是用来将数字整体后移
		}
	}
	printf ("f3 = %d",f3);                     //n的值用f3来表示
}