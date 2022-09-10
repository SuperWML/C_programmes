/*
2022年7月31日17点47分
更改输入，空格不变
*/

#include <stdio.h>
#define SPACE ' '
int main (){
	char ch;
	ch = getchar();
	
	while (ch != '\n'){
		if (ch == SPACE)
		putchar (ch);
		else
		putchar (ch+1);
		ch = getchar();
	}
	putchar (ch);
	return 0;
}
