/*
2022��7��17��16��41��
ʹ��do...while��ʵ��һԪ���η���
Ŀ�ģ�ѧ��ʹ��do...while
*/

#include <stdio.h>
#include <math.h>
int main (){
	double a,b,c;
	double delta;
	double x1,x2;
	char ch;
	do{
	
	printf ("������һԪ���η��̵�����ϵ����\n");
	printf ("a = ");
	scanf ("%lf",&a);
	
	printf("b = ");
	scanf ("%lf",&b);
	
	printf ("c = ");
	scanf ("%lf",&c);

	delta = b*b - 4*a*c;
	if (delta > 0){
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		printf ("�������⣬x1 = %lf��x2 = %lf\n",x1,x2);
	}else if (0 == delta){
		x1 = x2 =(-b)/(2*a);
		printf ("��Ψһ�⣬x1 = x2 = %lf\n",x1);
	}else {
		printf ("�޽⣡");
	}
	
	printf ("��������𣿣�y��n��");
	scanf (" %c",&ch);          //%cǰ�����Ҫ��һ���ո�ԭ����
	//���ϵļ������Ҫ��û��do...while����ֻ�ܼ���һ�Σ����˾Ϳ��Լ����Σ�����ȴ�޷�ֹͣ
}while (ch == 'y' || ch== 'Y');      //ֻҪ�û��������y����Y�ͻ�ѭ��
}

/*
���������е���ʾ���Ϊ��
-----------------------------
������һԪ���η��̵�����ϵ����
a = 1
b = 5
c = 6
�������⣬x1 = -2.000000��x2 = -3.000000
��������𣿣�y��n��y
������һԪ���η��̵�����ϵ����
a = 1
b = 2
c = 3
�޽⣡��������𣿣�y��n��
-----------------------------

�ܽ�:�˽�do...while���÷����ó���ʹ��do...whileʵ������򵥵��˻�����
*/