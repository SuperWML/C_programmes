#include <stdio.h>
int main (){
	int hour1,minute1;
	int hour2,minute2;
	scanf ("%d %d",&hour1,&minute1);
	scanf ("%d %d",&hour2,&minute2);
	int t1 = hour1*60+minute1;                   //转换为分钟单位
	int t2 = hour2*60+minute2;
	int t = t2 - t1;                             //时间差
	printf ("时间差为%d小时%d分钟",t/60,t%60);   //t/60是小时，t%60是分钟
}