/*
2022��7��28��16��47��
�����ʹ��=�ᵼ�³������޴��ظ�
Ŀ��:�˽⸳ֵ��=�����ʽ���жϣ�==�����ʽ֮�������
*/

#include <stdio.h>
int main (){
	long num;
	long sum = 0L;
	int status;
	
	printf ("Please enter an integer to be summed ");
	printf ("(Q to quit):");
	status = scanf ("%ld",&num);                  
	
	while (status = 1){                          //�����1��ֵ��status��
	                                             //�ᵼ��whileѭ��һֱ����
		sum = sum+num;
		printf ("Please enter next integer (q to quit):");
		status = scanf ("%ld",&num);
	}
	
	printf ("Those integers sum to %ld.\n",sum);
	return 0;
}

/*
���������е�������Ϊ��
----------------------------------
����һֱ�ظ���Ҫע��=��==��ʹ��
----------------------------------
*/