//�Ƚ����Ĵ�С (����if) ����2
#include <stdio.h>
int main (){
	int a,b;
	printf ("��������������");
	scanf ("%d,%d",&a,&b);
	int max = 0;                    //max�ĳ�ʼ��
	if (a>b){
		max = a;
	}
	if (b>a){
		max = b;
	}
	printf ("����Ǹ���:%d",max);
}