#include <stdio.h>
#include <stdbool.h>

bool f(int m);

int x(int m){                         //����һ������ǲ��������ĺ���
	int a;
	//������val֮�������
	for (a = 2;a<=m;++a){
	//�ж��Ƿ�������
	if (f(a)){                         //�����ĵ����ڶ���֮ǰ������Ҫ����ǰ����������
		printf ("%d������\n",a);
	}else {
		printf ("%d��������\n",a);
	}
}
return 0;
}

bool f(int m){                      //����һ������ֵ�ķ������͵ĺ���f��ֻ����һ���β�
	int i;
	for (i = 2;i<m;++i){
		if (m%i == 0){
			break;
		}
	}
	if (i == m){
		return true;
	}else {
		return false;
	}
}

int main (){
	int a;                  //�������е�������
	int i;                  //�����ж��Ƿ�������
	int val;                //����������
	scanf ("%d",&val);      //�����û������������
	x(val);

}