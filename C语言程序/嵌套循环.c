/*
2022��7��31��11��10��
Ƕ��ѭ��
Ŀ�ģ��˽�Ƕ��ѭ��
*/

#include <stdio.h>
#define ROWS 6
#define CHARS 10
int main (){
	int row;
	char ch;
	for (row = 0;row < ROWS;row++){
		for (ch = 'A';ch<('A'+CHARS);ch++){
			printf ("%c",ch);
		}
		printf ("\n");
	}
	return 0;
}

/*
���������е�������Ϊ��
---------------------------------
ABCDEFGHIJ
ABCDEFGHIJ
ABCDEFGHIJ
ABCDEFGHIJ
ABCDEFGHIJ
ABCDEFGHIJ
---------------------------------
*/