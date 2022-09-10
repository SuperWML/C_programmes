/*
2022年8月9日15点48分
冒泡排序
目的：了解什么是冒泡排序
*/

#include <stdio.h>

void sort(int * a,int len){
	int i,j,t;
	
	for (i = 0;i<len-1;++i){
		
		for (j = 0;j<len-1-i;++j){
			
			if (a[j] > a[j+1]){
				
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	
	
}

int main (){
	int a[6] = {10,2,8,-8,11,0};
	int i = 0;
	
	sort (a,6);
	
	for (i = 0;i<6;++i){
		printf ("%d ",a[i]);
	}
	printf ("\n");
}

/*
在命令行中的输出结果为：
-----------------------------
-8 0 2 8 10 11
-----------------------------
*/