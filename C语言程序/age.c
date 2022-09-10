#include <stdio.h>
int main (){
	const int minor = 35;
	int age = 0;
	printf ("please input your age:");
	scanf("%d",&age);
	printf ("your age is %d\n",age);
	if (age < minor){
		printf ("young\n");
	}
	printf ("young is good");
}