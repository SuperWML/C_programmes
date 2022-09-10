/*
	2022年6月17日21点46分
	目的：研究不匹配的整型转换示例
	作用：转换一定要匹配
*/
#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main (){
	short num = PAGES;
	short mnum = -PAGES;
	printf ("num as short and unsigned short:%hd %hu\n",num,num);              //输出结果为336 336
	printf ("-num as short and unsigned short:%hd %hu\n",mnum,mnum);           //输出结果为-336，第二个是因为在无符号short中数字32768-65535表示负数
	printf ("num as int and char:%d %c\n",num,num);                            //char只有一字节，short有两字节，在转换时会发生截断，只取其中一字节
	printf ("WORDS as int and short and char:%d %hd %c\n",WORDS,WORDS,WORDS);  //
}
/*
在命令行显示信息如下：
-----------------------------------------------
num as short and unsigned short:336 336
-num as short and unsigned short:-336 65200
num as int and char:336 P
WORDS as int and short and char:65618 82 R
-----------------------------------------------
*/