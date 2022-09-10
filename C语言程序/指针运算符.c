#include <stdio.h>
int main (){
	int i = 6;
	int* pi = &i;
	printf ("%d\n",i);
	printf ("%p\n",&i);
	printf ("%p",pi);
}