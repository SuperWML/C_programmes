/*
  2022年9月7日18点56分
  目的：单链表的练习
 */

#include<stdio.h>
#include<malloc.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* CreatList(){
	struct Node* headList = (struct Node*)malloc(sizeof(struct Node*));
	headList->next = NULL;
};

struct Node* CreatNode(int data){
	struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node*));
	NewNode->data = data;
	NewNode->next = NULL;
};

void insertNode (struct Node* headlist,int data){
	struct Node* Inode = CreatNode(data);
	Inode->next = headlist->next;
	headlist->next = Inode;
}

void printfNode (struct Node* headList){
	struct Node* pMove = headList->next;
	while(pMove){
		printf ("%d",pMove->data);
		pMove = pMove->next;
	}
	printf ("\n");
}

int main (){
	struct Node* List = CreatList();
	insertNode(List,1);
	insertNode(List,2);
	insertNode(List,3);
	printfNode(List);
	free(List);
}
