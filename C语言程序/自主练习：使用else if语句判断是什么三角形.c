/*
2022��7��23��20��50��
ʹ��else_if����ж���ɶ������
Ŀ�ģ��й�else_if������ϰ
*/

#include <stdio.h>
int main (){
	//������������������������������߳���
	float i,j,k;
	printf ("�����������ε����߳��ȣ�");
	scanf ("%f %f %f",&i,&j,&k);
	
	//ʹ��else_if�����ж���ɶ������
	if (i+j<=k||i+k<=j||j+k<=i){
		printf ("�ⲻ��һ��������\n");
	}else if(i==j||i==k||j==k){
		printf ("����һ������������\n");
	}else if ((i*i+j*j==k*k)||(i*i+k*k==j*j)||(j*j+k*k==i*i)){
		printf ("����һ��ֱ��������");
	}else{
		printf ("����һ����ͨ��������\n");
	}
}