/*
2022年8月8日23点32分
用指针的方法取出结构体中的成员
目的：了解怎么使用结构体指针
*/

#include <stdio.h>

struct wml {
	int age;
	char sex;
	float score;
};                           //到这里为止，定义了一个结构体wml，struct wml是一个数据类型

int main (){
	//赋值方法1，同时也是定义和初始化
	struct wml wml1 = {
		18,
		'M',
		99.0
	};                      //定义了一个结构体变量wml1，并且age = 18，sex = M，
	 						//score = 99.0，这里是结构体变量wml1的初始化和赋值
	
	//赋值方法2
	struct wml wml2;        //定义了一个数据类型为struct wml的变量wml2，并在下面给他赋值
	wml2.age = 19;
	wml2.score = 98.0;
	wml2.sex = 'f';
	
	struct wml * wml3;            //定义数据类型为struct wml * 的指针变量wml3
	wml3 = &wml1;
	
	//取出结构体变量的方法
	(* wml3).age = 19;
	wml3 -> age = 20;              //这句话等价于(* wml3).age= 20
	printf ("%d",wml1.age);
}

/*
在命令行中的输出结果为：
----------------------------------
20
----------------------------------
*/