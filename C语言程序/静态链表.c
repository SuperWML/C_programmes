/*
2022��8��14��21��59��
����
Ŀ�ģ��˽�ʲô������
*/

#include <stdio.h>

struct Node{
	int data;                 //������
	struct Node * next;         //ָ����
};

int main (){
	//����ڵ�Ľṹ��
	struct Node node1 = {
		1,
		NULL
	};
	struct Node node2 = {
		2,
		NULL
	};
	struct Node node3 = {
		3,
		NULL
	};
	
	//�������Ӳ�����ʹ��һ���Ľṹ��ָ��ָ��ڶ������ڶ���ָ�������
	node1.next = &node2;
	node2.next = &node3;
}