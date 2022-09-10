#include <stdio.h>
#include <malloc.h>

struct Node {
	int data;
	struct Node* next;
};


struct Node* CreatList(){
	struct Node* headList = (struct Node*)malloc(sizeof (struct Node*));
	headList->next = NULL;
};

struct Node* CreatNode (int data){
	struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node*));
	NewNode->next = NULL;
	NewNode->data = data;
};

void insertNode (struct Node* headList,int data){
	struct Node* NewNode = CreatNode(data);
	NewNode->next = headList->next;
	headList->next = NewNode;
}

void printfList(struct Node* headList){
	struct Node* pMove = headList->next;
	for (;pMove;pMove = pMove->next){
		printf ("%d",pMove->data);
	}
	printf ("\n");
}

int main (){
	struct Node* List = CreatList();
	insertNode(List,1);
	insertNode(List,2);
	insertNode(List,3);
	printfList(List);
	free(List);
}
