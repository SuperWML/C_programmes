#include <stdio.h>
int main(){
	int price = 0;                           //����һ�����ͱ���price�����丳ֵΪ0
	printf("�������Ԫ����1");                   
	scanf ("%d",&price);                  //����һ�����������Ϊ����price����ֵ
	int change = 100-price;              //����һ�����α���change�����丳ֵΪ100-price
	printf ("����%dԪ��\n",change);
}