/*
2022��6��30��15��27��
ʹ��if_else�Է����Ĵ���
Ŀ�ģ���ϰif_else���
*/
#include <stdio.h>
int main (){
	float score;
	printf ("���������ĳɼ���");
	scanf ("%f",&score);
	if (score > 100){
		printf ("�������Σ�\n");
	}else if (score >=90 && score <=100){            //����Я��90<=score<=100
		printf ("���㣡\n");
	}else if (score <90 && score >=80){
		printf ("����\n");
	}else if (score >=60 && score <80){
		printf ("����\n");
	}else {
		printf ("������\n");
	}
}