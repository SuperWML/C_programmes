/*
2022��7��20��21��06��
ʹ��sizeof�����
���ã��о�sizeof�����ʹ�õ�
*/

#include <stdio.h>
int main (){
	int n = 0;
	size_t intsize;
	intsize = sizeof (int);
	printf ("n = %d. n has %zd Bytes; all ints have %zd Bytes.\n",n,sizeof n,intsize);
	return 0;
}

/*
���������е�������Ϊ
------------------------------
n = 0. n has 4 Bytes; all ints have 4 Bytes.
------------------------------
*/