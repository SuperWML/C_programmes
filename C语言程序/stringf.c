/*
	2022��6��17��21��24��
	C Primer Plus��stringf.c
	Ŀ�ģ����ַ����� �����ʽ
	���ã�ѧϰ��ͬǰ׺����ô���ַ��������
*/
#include <stdio.h>
#define BLURB "Authentic imitation!"
int main (){
	printf ("[%2s]\n",BLURB);           //���2���ַ����������ڳ������������
	printf ("[%24s]\n",BLURB);          //���24���ַ����������ÿո����
	printf ("[%24.5s]\n",BLURB);        //���5����Ч�ַ���ʣ�µĲ����ÿո����
	printf ("[%-24.5s]",BLURB);         //-�ű�ʾ�����
	return 0;
}
/*
������������ʾ�Ľ��Ϊ��
-----------------------------
[Authentic imitation!]
[    Authentic imitation!]
[                   Authe]
[Authe                   ]
------------------------------
*/