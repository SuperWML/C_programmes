/*
2022年8月8日13点53分
结构体的应用
目的：初次使用结构体
*/

#include <stdio.h>
struct Noob{
	int age;
	char sex;
	char name;
};

int main (){
	struct Noob wml = {18,'F','w'};
	printf ("%d\n",wml.age);
	printf ("%c\n",wml.sex);
	printf ("%c\n",wml.name);
}

/*
在命令行中的输出结果为：
------------------------------------
18
F
w
------------------------------------

总结：结构体是声明了一种数据类型，用来抽象的表达现实中的概念（类似于对象）
这里是结构体的初次使用
*/