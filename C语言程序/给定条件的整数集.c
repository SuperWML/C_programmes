#include <stdio.h>
int main ()
{
	int a;
	scanf ("%d",&a);
	int j,k,l;
	int count = 1;
	j = a;
	while (j <= a+3){
		k = a;
		while (k <= a+3){
	l = a;
			while (l <= a+3)
			{
				
				l++;
				if (j != k){
					if (j != l){
						if (k != l){
							count++;
							printf ("%d%d%d",j,k,l);
							if (count == 6){
								printf ("\n");
								count = 0;
							}else {
								printf (" ");
							}
						}
					}
				}
			}
			k++;
		}
		j++;
	}
}