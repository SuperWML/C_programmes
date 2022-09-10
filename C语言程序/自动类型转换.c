/*
2022年7月24日17点06分
自动类型转换
目的：了解自动类型转换
*/

#include <stdio.h>
int main (){
	char ch;            //字符型变量ch
	int i;              //整型i
	float fl;           //浮点型fl
	
	fl = i = ch = 'C';
	printf ("ch = %c,i = %d,fl = %2.2f\n",ch,i,fl);              // C 99 99.0
	
	ch = ch+1;        //ch = 100
	i = fl+2*ch;      //i = 299
	fl = 2.0*ch+i;    //499.0
	printf ("ch = %c,i = %d,fl = %2.2f\n",ch,i,fl);     
	
	ch = 11.7;
	printf ("Now ch = %c\n",ch);
	ch = 80.89;
	printf ("Now ch = %c\n",ch);
	return 0;
}