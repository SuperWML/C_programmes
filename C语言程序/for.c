/*
2022年7月17日14点55分
for循环的嵌套使用_3
目的：要学会判断for循环的执行顺序
*/
#include <stdio.h>
int main (){
	int i,j;
	for (i= 0;i< 3;++i){
		printf ("嘿嘿！\n");
		for (j= 2;j< 5;++j){
			printf ("哈哈！\n");
			printf ("嘻嘻！\n");
		}
		printf ("呜呜！\n");
	}
}