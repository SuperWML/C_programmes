/*
2022��7��31��11��01��
do_whileѭ��
Ŀ�ģ��˽�do_whileѭ��
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
���������е�������Ϊ��
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