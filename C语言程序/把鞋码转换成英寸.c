/*
2022��7��20��14��36��
C P P��ѭ����飬��Ь��ת����Ӣ��
Ŀ�ģ�����ѧϰѭ��
*/
#include <stdio.h>
#define ADJUST 7.31                     //Ԥ����һ���ַ�����ADJUST
int main (void){
	const double SCALE = 0.333;         //����һ��double���͵ĳ���SCALE
	double shoe,foot;
	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;
	printf ("Shoe	size	(men s)	foot	length\n");
	printf ("%10.1f	%15.2f	inches\n",shoe,foot);
	return 0;	
}

/*
���������е�������Ϊ��
--------------------------------------------
Shoe    size    (men s) foot    length
       9.0                10.31 inches
--------------------------------------------
*/