/*
2022年7月31日11点01分
do_while循环
目的：了解do_while循环
*/

#include <stdio.h>
int main (){
	const int secret_code = 13;
	int code_entered;
	do{
		printf ("To enter the triskaidekaphobia therapy club,\n");
		printf ("Please enter the secret code number:");
		scanf ("%d",&code_entered);
	}while (code_entered != secret_code);
	printf ("Congratulations! You are cured!\n");
	return 0;
}

/*
在命令行中的输出结果为：
---------------------------------
To enter the triskaidekaphobia therapy club,
Please enter the secret code number:12
To enter the triskaidekaphobia therapy club,
Please enter the secret code number:14
To enter the triskaidekaphobia therapy club,
Please enter the secret code number:13
Congratulations! You are cured!
---------------------------------
*/