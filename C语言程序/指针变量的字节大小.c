/*
2022��8��5��21��03��
�о�ָ��������ֽڴ�С
Ŀ�ģ��о�ָ������Ĵ�С
*/

#include <stdio.h>
int main (){
	char ch = 'A';
	int i = 99;
	double x = 66.6;
	char *p = &ch;
	int *q = &i;
	double * r = &x;
	
	printf ("%d %d %d",sizeof(p),sizeof(q),sizeof(r));
}