#include <stdio.h>
#include <malloc.h>

struct Node {
	int data;
	struct Node * next;
};

struct Node * creatList(){
	struct Node* headList = (struct Node*)malloc(sizeof(struct Node));	
	headList->next = NULL;
	return headList;
};

struct Node* creatNewNode (int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
};

void printList (struct Node* headNode){
	struct Node* pMove = headNode->next;
	while(pMove){
		printf ("%d",pMove->data);
		pMove = pMove->next;
	}
	printf ("\n");
}

struct Node* insertNode (struct Node* headNode,int data){
	struct Node* NewNode = creatNewNode(data);
	NewNode->next = headNode->next;
	headNode->next = NewNode;
};

int main (){
	struct Node* list = creatList();
	insertNode(list,1);
	insertNode(list,2);
	insertNode(list,3);
	printList(list);
}
