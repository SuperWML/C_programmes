/*
2022年7月31日17点17分
if语句地再复习
*/

#include <stdio.h>
int main (){
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;
	
	printf ("Enter the list of daily low temperatures.\n");
	printf ("Use Celsius,and enter q to quit.\n");
	
	while (scanf ("%f",&temperature) == 1){
		all_days++;
		if (temperature < FREEZING)
		cold_days++;
	}
	
	if (all_days != 0)
	printf ("%d days total:%.1f%% were below freezing.\n",all_days,100.0*(float)cold_days/all_days);
	
	if (all_days ==0)
	printf ("No data entered!\n");
	return 0;
}

/*
在命令行中的输出结果为：
--------------------------------
Enter the list of daily low temperatures.
Use Celsius,and enter q to quit.
12 5 -2.5
0 6 8 -3 -10 5 10 q
10 days total:30.0% were below freezing. 
--------------------------------
*/