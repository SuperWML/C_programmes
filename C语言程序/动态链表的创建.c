/*
2022��8��14��22��11��
��̬����
Ŀ�ģ��˽⶯̬����Ľṹ
*/

#include <stdio.h>
#include <malloc.h>

struct Node {
	int data;
	struct Node *Next;
};

//����Ǳ�ͷ

struct Node * creatList (){
	//�ýṹ��ָ�����˽ṹ�����
	struct Node * headNode = (struct Node *)malloc (sizeof(struct Node));
	
	//����ʹ��֮ǰ���뱻��ʼ��
	headNode->data = 1;
	headNode->Next = NULL;
}

//�����ڵ�
struct Node * creatNode (int data){
	struct Node * newNode = (struct Node *)malloc (sizeof(struct Node));
	newNode -> data = data;           //��������ָ���β�
	newNode -> Next = NULL;           //��ָ����ָ��NULL
}

//��ӡ����
void printfList(struct Node * headNode){
	
	struct Node * pMove = headNode ->Next;
	
	while (pMove){
		printf ("%d",pMove->data);
		pMove = pMove->Next;
	}
	printf ("\n");
}

//����ڵ㣬�����������Ǹ���������ڵ�������Ƕ���
void insertNodeByHead(struct Node * headNode,int data){
	struct Node * newNode = creatNode(data);
	//���²�������ڵ�
	newNode->Next = headNode->Next;
	headNode->Next = newNode;
}

int main (){
	//������̬����
	struct Node *list = creatList ();
	insertNodeByHead (list,1);
	insertNodeByHead (list,2);
	insertNodeByHead (list,3);
	printfList(list);
}