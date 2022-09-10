/*
2022年7月29日14点50分
输入一个数字，然后输出2到这个数字之间所有的素数
*/

#include <stdio.h>
int main (){
	int a;                  //遍历所有的数字用
	int i;                  //参与判断是否是素数
	int val;                //接收数字用
	scanf ("%d",&val);      //接收用户所输入的数字
	
	//遍历到val之间的数字
	for (a = 1;a<=val;a++){
	//判断是否是素数
	for (i = 2;i<a;i++){
		if (a%i == 0){
			break;
		}
	}
	if (i == a){
		printf ("%d是素数\n",a);
	}else {
		printf ("%d不是素数\n",a);
	}
}
}

/*
在命令行中的输出结果为：
---------------------------
12
1不是素数
2是素数
3是素数
4不是素数
5是素数
6不是素数
7是素数
8不是素数
9不是素数
10不是素数
11是素数
12不是素数
---------------------------
*/