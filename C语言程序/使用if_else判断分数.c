/*
2022年6月30日15点27分
使用if_else对分数的处理
目的：练习if_else语句
*/
#include <stdio.h>
int main (){
	float score;
	printf ("请输入您的成绩：");
	scanf ("%f",&score);
	if (score > 100){
		printf ("这是做梦！\n");
	}else if (score >=90 && score <=100){            //不能携程90<=score<=100
		printf ("优秀！\n");
	}else if (score <90 && score >=80){
		printf ("良好\n");
	}else if (score >=60 && score <80){
		printf ("及格！\n");
	}else {
		printf ("不及格！\n");
	}
}