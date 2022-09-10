#include <stdio.h>
int main (){
	double foot;
	double inch;
	printf ("请输入此人的身高");
	scanf ("%lf %lf",&foot,&inch);
	printf ("此人的身高为：\n%f",(foot+inch/12)*0.3048);
}