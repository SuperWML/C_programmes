/*
	2022年6月17日21点24分
	C Primer Plus，stringf.c
	目的：看字符串得 输出格式
	作用：学习不同前缀是怎么让字符串输出的
*/
#include <stdio.h>
#define BLURB "Authentic imitation!"
int main (){
	printf ("[%2s]\n",BLURB);           //输出2个字符，但是由于超过所以填充满
	printf ("[%24s]\n",BLURB);          //输出24个字符，不够的用空格代替
	printf ("[%24.5s]\n",BLURB);        //输出5个有效字符，剩下的不够用空格代替
	printf ("[%-24.5s]",BLURB);         //-号表示左对齐
	return 0;
}
/*
在命令行中显示的结果为：
-----------------------------
[Authentic imitation!]
[    Authentic imitation!]
[                   Authe]
[Authe                   ]
------------------------------
*/