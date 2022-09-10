/*
2022年7月31日11点10分
嵌套循环
目的：了解嵌套循环
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
在命令行中的输出结果为：
---------------------------------
ABCDEFGHIJ
ABCDEFGHIJ
ABCDEFGHIJ
ABCDEFGHIJ
ABCDEFGHIJ
ABCDEFGHIJ
---------------------------------
*/