/*
2022��7��28��21��47��
�ж�һ�������Ƿ�������
Ŀ�ģ��˽⺯����ʹ��
*/

#include <stdio.h>
int main () {
	int val;
	int i;
	
	scanf ("%d",&val);
	
	for (i = 2;i<val;i++){
		if (val % i ==0)
		break;
	}
	
	if (i==val)
	printf ("Yes!");
	else
	printf ("No!");
}

/*
���������е�������Ϊ��
------------------------------------
12
No!
16
No!
5
Yes!
------------------------------------
*/