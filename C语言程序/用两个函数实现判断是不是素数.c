#include <stdio.h>
#include <stdbool.h>

bool f(int m);

int x(int m){                         //定义一个输出是不是素数的函数
	int a;
	//遍历到val之间的数字
	for (a = 2;a<=m;++a){
	//判断是否是素数
	if (f(a)){                         //函数的调用在定义之前，所以要在最前面声明函数
		printf ("%d是素数\n",a);
	}else {
		printf ("%d不是素数\n",a);
	}
}
return 0;
}

bool f(int m){                      //定义一个布尔值的返回类型的函数f，只接受一个形参
	int i;
	for (i = 2;i<m;++i){
		if (m%i == 0){
			break;
		}
	}
	if (i == m){
		return true;
	}else {
		return false;
	}
}

int main (){
	int a;                  //遍历所有的数字用
	int i;                  //参与判断是否是素数
	int val;                //接收数字用
	scanf ("%d",&val);      //接收用户所输入的数字
	x(val);

}