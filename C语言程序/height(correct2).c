#include <stdio.h>
int main (){
	double foot;
	double inch;
	printf ("��������˵����");
	scanf ("%lf %lf",&foot,&inch);
	printf ("���˵����Ϊ��\n%f",(foot+inch/12)*0.3048);
}