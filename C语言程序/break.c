/*
2022��7��23��00��23��
break�����÷�
Ŀ�ģ��˽�break�����÷�
*/

#include <stdio.h>
int main (){
	int i;
	
	switch (2){
		case 2:
		break;
	}
	//break���������˳�switch���
	for (i = 0;i <3;++i){
		if (3>2)
		break;
		printf ("1");
	}
	//switch�����������˳�ѭ����䣬����if������������ѭ��Ҳ����ʹ��break���
	if (3>2)
	break ;
	//break��䲻��ֱ������if���
}

/*
�ܽ᣺
1.break�����������˳�switch���
2.break������ֱ��������ֹѭ��
3.break��䲻��ֱ������if��䣬���������ڴ���ѭ���е�if���
4.�ڶ��ѭ���У�breakֻ����ֹ�������ѭ��
5.�ڶ��switchѭ���У�switchֻ����ֹ�����switch���
*/