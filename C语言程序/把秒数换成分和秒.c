/*
2022年7月20日21点24分
把秒数转换成分和秒
目的：关于取模运算符%的使用
*/

#include <stdio.h>
#define SEC_PER_MIN 60
int main (){
	int sec,min,left;
	printf ("Convert seconds to minutes and seconds!\n");
	printf ("Enter the number of seconds (<=0 to quit):\n");
	scanf ("%d",&sec);                                                     //读取秒数
	
	while (sec>0){
		min = sec / SEC_PER_MIN;                                          //截断分钟
		left = sec % SEC_PER_MIN;                                         //剩下的秒数
		printf ("%d seconds is %d minutes,%d seconds.\n",sec,min,left);    
		printf ("Enter next value (<=0 to quit):\n");      
		scanf ("%d",&sec);
	}
	printf ("Done!\n");
	return 0;
}

/*
在命令行中的输出结果为
------------------------------------
Convert seconds to minutes and seconds!
Enter the number of seconds (<=0 to quit):
154
154 seconds is 2 minutes,34 seconds.
Enter next value (<=0 to quit):
567
567 seconds is 9 minutes,27 seconds.
Enter next value (<=0 to quit):
0
Done!
------------------------------------
*/