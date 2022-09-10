/*
  2022年8月22日22点21分
  单链表
  目的：了解单链表的组成
 */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct Node {
	int data;                         //结构体里面的数据域
	struct Node * next;               //结构体里面的指针域
};

//创建节点的函数，和创建链表比起来多了一个数据域
struct Node* creatNode (int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
	newNode->data = data;
	newNode->next = NULL;
}

//插入节点，参数：插入的哪个链表，插入的节点的数据是多少
void insertNodeByHead(struct Node* headNode,int data){
	struct Node* newNode = creatNode(data);
	newNode->next = headNode->next;
	headNode->next = newNode;
}

//遍历链表的函数
void printList (struct Node*headNode){
	struct Node *pMove = headNode->next;
	while(pMove){
		printf("%d",pMove->data);
		pMove = pMove->next;
	}
	printf( ("\n"));
}

//创建链表的头节点
struct Node* creatList(){
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
	/*用这个节点表示表头，表示整个链表,变量本质上就是内存，指针申请完内存之后
	  就是变量了*/
	
	//变量只要诞生，就要被初始化
	//headNode->data = 1;
	headNode->next = NULL;
	return headNode;
}



int main (){
	//创建一个链表
	struct Node* list = creatList();
	insertNodeByHead(list,1);
	insertNodeByHead(list,2);
	insertNodeByHead(list,3);
	printList(list);
}


	

