/*
2022��7��17��15��36��
�������
Ŀ�ģ�ͨ������������˽���ѧ���һ��Ҫ��

�������Ķ��壺
12321
121
45654
*/

#include <stdio.h>
int main (){
	int val;                                  //���������Ҫ�жϵ�����
	int m;
	int sum = 0;
	printf ("��������Ҫ�жϵ����֣�");
	scanf ("%d",&val);
	m = val;
	while (m){                               //MֻҪ����0���ͻ�ִ�У���C������0�Ǽ٣���������
		sum = sum*10+m%10;
		m /= 10;
	}
	if (sum == val){
		printf ("Yes");
	}else{
		printf ("No");
	}
}