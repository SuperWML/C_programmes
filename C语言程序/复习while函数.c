/*
2022��7��28��15��56��
����ѧϰwhile����
Ŀ�ģ���ϰwhile����
*/

#include <stdio.h>
int main (){
	long num;
	long sum = 0L;
	int status;
	
	printf ("Please enter an integer to be summed ");
	printf ("(Q to quit):");
	status = scanf ("%ld",&num);                  //���scanf�ɹ���ȡ����һ��������
	                                              //�򷵻�1����ֵ��status��
												  //Ȼ�󽫶�����ֵ��num
	
	while (status == 1){                          //�ж������status�Ƿ�������
		sum = sum+num;
		printf ("Please enter next integer (q to quit):");
		status = scanf ("%ld",&num);
	}
	
	printf ("Those integers sum to %ld.\n",sum);
	return 0;
}

/*
���������е�������Ϊ��
-------------------------------------
Please enter an integer to be summed (Q to quit):44
Please enter next integer (q to quit):33
Please enter next integer (q to quit):88
Please enter next integer (q to quit):121
Please enter next integer (q to quit):q
Those integers sum to 286.

-------------------------------------
*/