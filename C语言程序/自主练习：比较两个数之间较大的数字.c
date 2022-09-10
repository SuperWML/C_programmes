/*
2022年7月23日20点18分
输入两个整数，使用if-else语句求两个整数之间的较大值
目的：练习if-else语句
*/

#include <stdio.h>
int main (){
	//定义三个变量用来存两个整数并用来交换
	int i,j,temp;
	printf("请输入两个数字用来比较：");
	scanf ("%d %d",&i,&j);
	
	//使用if_else用来比较两个数字
//	if (i<j){
//		temp = i;
//		i = j;
//		j = temp;
//	}else 
//	printf ("两个数之间较大的数字是：%d,%d",i,j);
//	

//另一种解法：
if (i < j){
	temp = j;
	printf ("较大的数值是：%d",temp);
}else {
	temp = i;
	printf ("较大的数值是：%d",temp);
}
	
	
	
}

