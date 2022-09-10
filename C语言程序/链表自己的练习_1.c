#include <stdio.h>
#include<malloc.h>

//新建一个链表的结构体
struct Node  {
	int data;             //结构体里面的数据域
	struct Node* next;        //结构体里面的指针域
};

//创建链表的函数，只要有了头节点，就会有链表
struct Node * creatlist (){
	struct Node * headNode = (struct Node*)malloc(sizeof(struct Node));
	headNode->next = NULL;
	return headNode;
}

struct insertByHead (struct Node* headNode,int data){
	struct Node * newNode = creatNode(data);
	newNode->next = headNode->next;
	headNode->next = newNode;
}

//创建新的节点的函数
void struct Node* creatNode(int data){
	struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
}






