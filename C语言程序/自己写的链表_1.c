#include <stdio.h>
#include <malloc.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* creatList (){
	struct Node* creatList = (struct Node*)malloc(sizeof(struct Node));
	creatList->next = NULL;
	return creatList;
}

struct Node* creatNewNode(int data){
	struct Node* creatNewNode = (struct Node*)malloc(sizeof(struct Node));
	creatNewNode->data = data;
	creatNewNode->next = NULL;
}

void printList (struct Node* headNode){
	struct Node* pMove = headNode->next;
	while(pMove){
		printf("%d",pMove->data);
		pMove = pMove ->next;
	}
	printf("\n");
}

struct Node * insertNode (struct Node * What,int data){
	struct Node * NewNode = creatNewNode(data);
	NewNode->next = What->next;
	What->next = NewNode;
}

int main (){
	struct Node * list = creatList();
	insertNode(list,1);
	insertNode(list,2);
	insertNode(list,3);
	printList(list);
}




