/*
2022��7��25��17��52��
������ʹ��
Ŀ�ģ���ϰ������ʹ��
*/
#include <stdio.h>

float MAX (int a,int b,int c,int d){
	if (a<b){
		d = a;
		a = b;
		b = d;
	}if (a<c){
		d = a;
		a = c;
		c =d;
	}if (b < c){
		d = b;
		b = c;
		c = d;
	}
	printf ("%d %d %d",a,b,c);
}

int main (){
	int i,j,k,temp;
	temp = 0;
	printf ("please input three numbers:");
	scanf ("%d %d %d",&i,&j,&k);
	MAX (i,j,k,temp);
}

/*
���������е�������Ϊ��
-------------------------------------
please input three numbers:1 2 3
3 2 1
-------------------------------------
*/