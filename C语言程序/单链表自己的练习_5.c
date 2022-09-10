#include<stdio.h>
#include<malloc.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* CreatList(){
	struct Node* HeadList = (struct Node*)malloc(sizeof(struct Node));
	HeadList->next = NULL;
	HeadList->data = NULL;
	return HeadList;
};

struct Node* CreatNewNode(int data){
	struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
	NewNode->data = data;
	NewNode->next = NULL;
};

void printfNode (struct Node* HeadList){
	struct Node* pMove = HeadList;
	while(pMove){
		printf("%d",pMove->data);
		pMove = pMove->next;
	}
	printf("\n");
}

struct Node* insertNode (struct Node* HeadList,int data){
	struct Node* insert = CreatList();
	insert->data = data;
	insert->next = HeadList->next;
	HeadList->next = insert;
};

int main (){
	struct Node* list = CreatList();
	insertNode(list,1);
	insertNode(list,2);
	insertNode(list,3);
	printfNode(list);
}
