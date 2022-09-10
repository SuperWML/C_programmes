#include <stdio.h>
#include <malloc.h>

struct Node {
	int data;
	struct Node *next;
};

struct Node* creatList(){
	struct Node* headList = (struct Node*)malloc(sizeof(struct Node));
	headList->next = NULL;
}

struct Node* creatNode(int data){
	struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
	NewNode->data = data;
	NewNode->next = NULL;
};

void insertNode (struct Node* headNode,int data){
	struct Node* NewNode = creatNode(data);
	NewNode->next = headNode->next;
	headNode->next = NewNode;
}

void printList (struct Node* headNode){
	struct Node* pMove = headNode->next;
	while(pMove){
		printf ("%d",pMove->data);
		pMove = pMove->next;
	}
	printf ("\n");
}

int main (){
	struct Node* List = creatList();
	insertNode(List,1);
	insertNode(List,2);
	insertNode(List,3);
	printList(List);
	free(List);
}
