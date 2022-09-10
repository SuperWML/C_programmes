/*
2022年7月28日16点36分
浮点数的比较
目的:了解浮点数是如何比较的
*/

#include <stdio.h>
#include <math.h>
int main (){
	const double ANSWER = 3.14159;
	double response;
	printf ("What is the value of pi?\n");
	scanf ("%lf",&response);
	
	while (fabs(response - ANSWER)>0.0001){
		printf ("Try again!\n");
		scanf ("%lf",&response);
	}
	printf ("Close enough!\n");
	return 0;
}

/*
在命令行中的输出结果为
--------------------------------
What is the value of pi?
3.14
Try again!
3.1415926
Close enough!
--------------------------------
*/