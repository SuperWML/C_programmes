/*
2022��7��28��22��10��
ʹ�ú����ж�һ�����Ƿ�������
Ŀ��:�˽⺯����ʹ��
*/

#include <stdio.h>
#include <stdbool.h>          //�ܹ����ò�������
bool f(int val);              //����������
int main (){
	int m;

	
	int b;
	while (scanf ("%d",&b)){
		scanf ("%d",&m);
	if (f(m)){
		printf ("Yes!");
	}else {
		printf ("No!");
	}
}
}

bool f(int val){            //�����Ķ���
	int i;
	for (i = 2;i<val;i++){
		if (val % i ==0)
		break;
	}
	
	if (i==val)
	return true;
	else
	return false;
}

/*
���������е�������Ϊ��
----------------------------------------
12
No!
16
No!
5
Yes!
----------------------------------------
*/