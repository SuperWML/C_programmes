#include <stdio.h>
#include <malloc.h>
int main (){
	int a[5];          //��̬���飬Ҫ�ȵ�����ִ�н��������ͷ��ڴ棬��д���޷��ֶ��ͷ�
	int len;
	int * pArr;
	int i = 5;
	printf ("��������Ҫ��ŵ�Ԫ�صĸ�����");
	scanf ("%d",&len);
	pArr = (int *)malloc(4 * len);           //������int pArr[len]
	//������len����ռ�ֽ���20�ֽ�
	
	for (i = 0; i <len;++i)
	scanf ("%d",&pArr[i]);                    //scanf����Ҫ��ȡ��ַ��
	printf ("һά����������ǣ�\n");
	for (i = 0;i<len;++i)
	printf ("%d\n",pArr[i]);
	free(pArr);                               //�ͷų�����ռ�õ��ڴ�
}