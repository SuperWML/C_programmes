/*
2022��7��30��11��19��
ʹ�õݼ���������ݼ�������
Ŀ�ģ�forѭ��������һ���÷�
*/

#include <stdio.h>
int main (){
	int secs;
	for (secs = 5;secs>0;secs--){
		printf ("%d seconds!\n",secs);
	}
	printf ("We have ignition!\n");
 	printf ("%d",secs);
	return 0;
}

/*
���������е�������Ϊ��
-----------------------------------
5 seconds!
4 seconds!
3 seconds!
2 seconds!
1 seconds!
We have ignition!
0
-----------------------------------
*/