/*
2022年8月14日22点11分
动态链表
目的：了解动态链表的结构
*/

#include <stdio.h>
#include <malloc.h>

struct Node {
	int data;
	struct Node *Next;
};

//这个是表头

struct Node * creatList (){
	//让结构体指针变成了结构体变量
	struct Node * headNode = (struct Node *)malloc (sizeof(struct Node));
	
	//变量使用之前必须被初始化
	headNode->data = 1;
	headNode->Next = NULL;
}

//创建节点
struct Node * creatNode (int data){
	struct Node * newNode = (struct Node *)malloc (sizeof(struct Node));
	newNode -> data = data;           //让数据域指向形参
	newNode -> Next = NULL;           //让指针域指向NULL
}

//打印链表
void printfList(struct Node * headNode){
	
	struct Node * pMove = headNode ->Next;
	
	while (pMove){
		printf ("%d",pMove->data);
		pMove = pMove->Next;
	}
	printf ("\n");
}

//插入节点，参数：插入那个链表，插入节点的数据是多少
void insertNodeByHead(struct Node * headNode,int data){
	struct Node * newNode = creatNode(data);
	//让新插入进来节点
	newNode->Next = headNode->Next;
	headNode->Next = newNode;
}

int main (){
	//创建动态链表
	struct Node *list = creatList ();
	insertNodeByHead (list,1);
	insertNodeByHead (list,2);
	insertNodeByHead (list,3);
	printfList(list);
}