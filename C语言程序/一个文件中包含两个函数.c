/*
2022年7月26日13点36分
一个文件中包含两个函数
目的：了解函数是如何定义的
*/

#include <stdio.h>
void butler(void);                  //这是函数原型，告诉程序在运行的时候有可能会用到这个函数，又叫函数的声明
int main (){
	printf ("I will summon the butler function\n");
	butler();                      //这里的意思是在这里使用butler函数
	printf ("Yes,Bring me some tea and writable DVDs.\n");
}

void butler (void){               //这里叫函数的定义，就是说自己创建的函数要执行生么动作，怎么用
	printf ("You rang,sir?\n");
}

/*
在命令行中的输出结果为：
--------------------------------------
I will summon the butler function
You rang,sir?
Yes,Bring me some tea and writable DVDs.
--------------------------------------

总结：在C语言中，无论函数被定义在哪里，程序的执行都是从main函数里进，从main函数里出
*/