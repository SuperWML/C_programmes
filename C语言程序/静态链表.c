/*
2022年8月14日21点59分
链表
目的：了解什么是链表
*/

#include <stdio.h>

struct Node{
	int data;                 //数据域
	struct Node * next;         //指针域
};

int main (){
	//定义节点的结构体
	struct Node node1 = {
		1,
		NULL
	};
	struct Node node2 = {
		2,
		NULL
	};
	struct Node node3 = {
		3,
		NULL
	};
	
	//进行链接操作，使第一个的结构体指针指向第二个，第二个指向第三个
	node1.next = &node2;
	node2.next = &node3;
}