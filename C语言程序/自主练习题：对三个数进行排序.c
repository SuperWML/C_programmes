/*
2022年7月23日20点00分
任意输入3个整数，使用if语句对这3个整数由小到大进行升序排序
目的：练习流程控制题
*/

#include <stdio.h>
int main (){
	int i,j,k,temp;
	i = 0;
	k = 0;
	temp = 0;
	//想要获取三个整数

	
	int l;
	//使用if语句对三个数字进行排序
	for (l = 1;l<=3;++l){
		printf ("请输入三个整数：");
	scanf ("%d %d %d",&i,&j,&k);
	if (i<j){
		temp = i;
		i = j;
		j = temp;
	}
	if (i<k){
		temp = i;
		i = k;
		k = temp;
	}
	if (j<k){
		temp = j;
		j = k;
		k = temp;
	}
	printf ("%d %d %d\n",i,j,k);
	}

}
/*
在命令行中的输出结果为：
------------------------------------------
请输入三个整数：1 2 3
3 2 1
请输入三个整数：54 56 52
56 54 52
请输入三个整数：14 1 100
100 14 1
------------------------------------------

成功！
*/