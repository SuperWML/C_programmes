/*
2022年7月23日21点06分
使用switch语句进行成绩转换
输入成绩(百分制)，将成绩转换为相应的等级，并输出。具体转换规则为：
* 大于等于90分为等级A；
* 小于90分且大于等于80分为等级B；
* 小于80分且大于等于70分为等级C；
* 小于70分且大于等于60分为等级D；
* 小于60分为等级E。
*/

#include <stdio.h>
int main (){
	//定义一个变量用来保存成绩
	int a;
	int b;
	printf ("请输入您的成绩：");
	scanf ("%d",&a);
	b = a/10;
	switch (b){
		case 10:{

		}
		case 9 :{
			printf ("该成绩为优");
			break;
		}
		case 8 :{
			printf ("该成绩为B");
			break;
		}
		case 7:{
			printf ("该成绩为C");
			break;
		}
		case 6:{
			printf ("该成绩为D");
			break;
		}
		default :{
			printf ("该成绩为E");
			break;
		}
	}
}