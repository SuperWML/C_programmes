/*
2022��7��26��13��36��
һ���ļ��а�����������
Ŀ�ģ��˽⺯������ζ����
*/

#include <stdio.h>
void butler(void);                  //���Ǻ���ԭ�ͣ����߳��������е�ʱ���п��ܻ��õ�����������ֽк���������
int main (){
	printf ("I will summon the butler function\n");
	butler();                      //�������˼��������ʹ��butler����
	printf ("Yes,Bring me some tea and writable DVDs.\n");
}

void butler (void){               //����к����Ķ��壬����˵�Լ������ĺ���Ҫִ����ô��������ô��
	printf ("You rang,sir?\n");
}

/*
���������е�������Ϊ��
--------------------------------------
I will summon the butler function
You rang,sir?
Yes,Bring me some tea and writable DVDs.
--------------------------------------

�ܽ᣺��C�����У����ۺ�������������������ִ�ж��Ǵ�main�����������main�������
*/