#include <stdio.h>
#include <malloc.h>
int main (){
	int a[5];          //静态数组，要等到函数执行结束才能释放内存，编写者无法手动释放
	int len;
	int * pArr;
	int i = 5;
	printf ("请输入您要存放的元素的个数：");
	scanf ("%d",&len);
	pArr = (int *)malloc(4 * len);           //类似于int pArr[len]
	//长度是len，所占字节是20字节
	
	for (i = 0; i <len;++i)
	scanf ("%d",&pArr[i]);                    //scanf里面要用取地址符
	printf ("一维数组的内容是：\n");
	for (i = 0;i<len;++i)
	printf ("%d\n",pArr[i]);
	free(pArr);                               //释放程序所占用的内存
}