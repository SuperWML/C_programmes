/*
2022��7��23��20��18��
��������������ʹ��if-else�������������֮��Ľϴ�ֵ
Ŀ�ģ���ϰif-else���
*/

#include <stdio.h>
int main (){
	//������������������������������������
	int i,j,temp;
	printf("�������������������Ƚϣ�");
	scanf ("%d %d",&i,&j);
	
	//ʹ��if_else�����Ƚ���������
//	if (i<j){
//		temp = i;
//		i = j;
//		j = temp;
//	}else 
//	printf ("������֮��ϴ�������ǣ�%d,%d",i,j);
//	

//��һ�ֽⷨ��
if (i < j){
	temp = j;
	printf ("�ϴ����ֵ�ǣ�%d",temp);
}else {
	temp = i;
	printf ("�ϴ����ֵ�ǣ�%d",temp);
}
	
	
	
}

