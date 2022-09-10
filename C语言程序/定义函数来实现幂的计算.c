/*
2022年7月31日11点46分
定义函数计算数的整数幂
*/

#include <stdio.h>
void f(double a,int b,double c);
double power (double n,int p);
int main (){
	double x,xpow;
	int exp;
	printf ("Enter a number and the positive integer power");
	printf ("	to which\nthe number will be raised.Enter q");
	printf (" to quit.\n");
	while (scanf("%lf%d",&x,&exp)==2){
		xpow = power(x,exp);
		f(x,exp,xpow);
	}
	printf ("Hope you enjoyed this power trip -- bye!");
	return 0;
}

double power (double n,int p){
	double pow = 1;
	int i;
	for (i = 1;i <= p;i++)
	pow *= n;
	return pow;
}

void f(double a,int b,double c){
	printf ("%.3g to the power %d is %.5g\n",a,b,c);
	printf ("Enter next pair of numbers or q to quit.\n");
}

/*
在命令行中的输出结果为：
---------------------------------
Enter a number and the positive integer power   to which
the number will be raised.Enter q to quit.
1.2 12
1.2 to the power 12 is 8.9161
Enter next pair of numbers or q to quit.
2
16
2 to the power 16 is 65536
Enter next pair of numbers or q to quit.
q
Hope you enjoyed this power trip -- bye!
---------------------------------
*/