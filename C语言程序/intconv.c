/*
	2022��6��17��21��46��
	Ŀ�ģ��о���ƥ�������ת��ʾ��
	���ã�ת��һ��Ҫƥ��
*/
#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main (){
	short num = PAGES;
	short mnum = -PAGES;
	printf ("num as short and unsigned short:%hd %hu\n",num,num);              //������Ϊ336 336
	printf ("-num as short and unsigned short:%hd %hu\n",mnum,mnum);           //������Ϊ-336���ڶ�������Ϊ���޷���short������32768-65535��ʾ����
	printf ("num as int and char:%d %c\n",num,num);                            //charֻ��һ�ֽڣ�short�����ֽڣ���ת��ʱ�ᷢ���ضϣ�ֻȡ����һ�ֽ�
	printf ("WORDS as int and short and char:%d %hd %c\n",WORDS,WORDS,WORDS);  //
}
/*
����������ʾ��Ϣ���£�
-----------------------------------------------
num as short and unsigned short:336 336
-num as short and unsigned short:-336 65200
num as int and char:336 P
WORDS as int and short and char:65618 82 R
-----------------------------------------------
*/