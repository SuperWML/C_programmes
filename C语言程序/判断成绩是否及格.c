#include <stdio.h>
int main (){
	const int PASS = 60;
	int score = 0 ;
	printf ("������ɼ���");
	scanf ("%d",&score);
	printf ("������ĳɼ���%d.\n",score);
	if (score < PASS)
		printf("�ɼ�û�м���");
	else
		printf ("ף���㣬����ɼ������ˡ�");
printf ("�ټ�\n");
}