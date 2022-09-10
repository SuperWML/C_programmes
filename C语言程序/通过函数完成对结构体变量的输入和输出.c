/*
2022年8月9日10点22分
通过函数完成对结构体变量的输入和输出
目的：了解函数，指针，结构体之间的关系
*/

#include <stdio.h>

struct wml {
	int age;
	char sex;
	float score;
};

void input (struct wml *p){             //定义修改结构体的函数，用来修改结构体内的值
	(*p).age = 19;
	p->score = 100.0;
	(*p).sex = 'S';
}

void output (struct wml q){            //定义输出结构体参数的函数，不需要用到指针
	printf ("%d %c %f\n",q.age,q.sex,q.score);
}

int main (){
	struct wml wml1 = {
		18,'f',99.9
	};
	//修改之前的结构体参数;
	printf ("%d %c %f\n",wml1.age,wml1.sex,wml1.score);
	
	input(&wml1);
	output(wml1);
}

/*
在命令行中的输出结果为：
------------------------------
18 f 99.900002
19 S 100.000000
------------------------------
*/