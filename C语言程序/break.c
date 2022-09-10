/*
2022年7月23日00点23分
break语句得用法
目的：了解break语句得用法
*/

#include <stdio.h>
int main (){
	int i;
	
	switch (2){
		case 2:
		break;
	}
	//break可以用于退出switch语句
	for (i = 0;i <3;++i){
		if (3>2)
		break;
		printf ("1");
	}
	//switch语句可以用于退出循环语句，并且if语句如果存在于循环也可以使用break语句
	if (3>2)
	break ;
	//break语句不能直接用于if语句
}

/*
总结：
1.break语句可以用于退出switch语句
2.break语句可以直接用于终止循环
3.break语句不能直接用于if语句，但可以用于处在循环中的if语句
4.在多层循环中，break只能终止他最近得循环
5.在多层switch循环中，switch只能终止最近得switch语句
*/