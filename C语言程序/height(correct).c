#include <stdio.h>
int main (){
	int foot;
	int inch;
	printf ("请输入此人的身高");
	scanf ("%d %d",&foot,&inch);
	printf ("此人的身高为：\n%f",(foot+inch/12.0)*0.3048);
}