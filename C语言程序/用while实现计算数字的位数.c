//用while判断数地位数
#include <stdio.h>
int main (){
	int x;
	int n = 0;
	scanf ("%d",&x);
	n++;
	x /= 10;
	while (x>0){
		n++;
		x /=10;
	}
	printf ("%d\n",n);
	return 0;
}