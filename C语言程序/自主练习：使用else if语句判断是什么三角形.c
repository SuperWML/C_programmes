/*
2022年7月23日20点50分
使用else_if语句判断是啥三角形
目的：有关else_if语句的练习
*/

#include <stdio.h>
int main (){
	//定义三个变量，用来存放三角形三边长度
	float i,j,k;
	printf ("请输入三角形的三边长度：");
	scanf ("%f %f %f",&i,&j,&k);
	
	//使用else_if函数判断是啥三角形
	if (i+j<=k||i+k<=j||j+k<=i){
		printf ("这不是一个三角形\n");
	}else if(i==j||i==k||j==k){
		printf ("这是一个等腰三角形\n");
	}else if ((i*i+j*j==k*k)||(i*i+k*k==j*j)||(j*j+k*k==i*i)){
		printf ("这是一个直角三角形");
	}else{
		printf ("这是一个普通的三角形\n");
	}
}