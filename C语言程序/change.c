#include <stdio.h>
int main(){
	int price = 0;                           //定义一个整型变量price，将其赋值为0
	printf("请输入金额（元）：1");                   
	scanf ("%d",&price);                  //输入一个数，将其变为变量price的新值
	int change = 100-price;              //定义一个整形变量change，将其赋值为100-price
	printf ("找您%d元。\n",change);
}