/*
2022��8��8��23��02��
�ṹ��ĸ�ֵ�ͳ�ʼ��
Ŀ�ģ��˽�ṹ������ζ��壬��ֵ���ͳ�ʼ��
*/

#include <stdio.h>
struct wml {
	int age;
	char sex;
	float score;
};                           //������Ϊֹ��������һ���ṹ��wml��struct wml��һ����������

int main (){
	//��ֵ����1��ͬʱҲ�Ƕ���ͳ�ʼ��
	struct wml wml1 = {
		18,
		'M',
		99.0
	};                      //������һ���ṹ�����wml1������age = 18��sex = M��
	 						//score = 99.0�������ǽṹ�����wml1�ĳ�ʼ���͸�ֵ
	
	//��ֵ����2
	struct wml wml2;        //������һ����������Ϊstruct wml�ı���wml2���������������ֵ
	wml2.age = 19;
	wml2.score = 98.0;
	wml2.sex = 'f';
	
	//�ṹ��ĵ���
	printf ("%d\n",wml1.age);
	printf ("%c\n",wml1.sex);
	printf ("%f\n",wml1.score);
	
	scanf ("%d",&wml1.age);
	printf ("%d\n",wml1.age);
}

/*
���������е�������Ϊ��
--------------------------------
18
M
99.000000
--------------------------------
*/