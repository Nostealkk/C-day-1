#define _CRT_SECURE_NO_WARNINGS 1



#include "node.h"
#include <stdio.h>
#include <stdlib.h>


//typedef struct _node {
//	int value;
//	struct _node* next;
//}Node;
//


//��ָ��ָ�����ڵ�ֱֵ������

//void add(Node** phead, int number);

//int main(int argc, char const* argv[])
//{
//	Node *head = NULL;
//	int number;
//	do {
//		scanf("%d", &number);
//		if (number != -1) {
//			add(&head,number);
//			}
//	} while (number != -1);
//
//
//	return 0;
//}


//void add(Node** phead, int number)
//{
//	//add to linked-list
//	Node * p = (Node*)malloc(sizeof(Node));
//	p->value = number;
//	p->next = NULL;
//
//	//find the last
//	Node* last = *phead;
//	if (last) {
//		while (last->next) {//�����last->next ��˼��ָ������ж�����next�next����null�Ļ�����ôlast�������nodeָ���next��while�����ֵ�� 1
//			last = last->next;
//		}
//		//attach
//		last->next = p;
//	}
//	else {
//		*phead= p;
//	}
//}


//
//typedef struct _list {/*�����ַ���������һ���ṹlist���������һ��head��
//	�ô��ǿ��Է�������Ż����������һ��tail������ÿ���������Ӵ����һ����ʼ�㣬
//	��Ҫÿ�ζ���head ���������� */
//	Node *head;
//	Node *tail;
//}List;

void add(List* pList, int number);

int main(int argc, char const* argv[])
{
	List list;
	list.head = list.tail =list.cnt= NULL;
	int number;
	do {
		scanf("%d", &number);
		if (number != -1) {
			add(&list, number);
		}
	} while (number != -1);


	return 0;
}


void add(List* pList, int number)
{
	//add to linked-list
	Node* p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;

    /*��ȷ��head �Ƿ��ж��������û��ȥֱ����head��tailָ��ͬһ��p��
	��Ϊ���ǵ�һ��ֵ��ͬʱ��Ϊhead��tail��
	�����ʱhead�Ѿ���ֵ����ô�µ�p����tail��next����tail��ָ�����µ�p
	�϶��µ�p����tail*/
	if (pList->head) {
		Node* last = pList->tail;
		last->next = p;
		pList->tail = p;
		pList->cnt++;

		printf("&p=%p\n",p);
		printf("&last->next=%p\n", last->next);
		printf("&pList->head=%p\n", pList->head);
		printf("&pList->tail=%p\n", pList->tail);
		printf("&pList->head->next=%p\n", pList->head->next);
		printf("&pList->cnt=%d\n", pList->cnt);

	}
	else {
		pList->head = p;
		pList->tail = p;
		pList->cnt++;
		printf("&pList->head=%p\n", pList->head);
		printf("&pList->head->next=%p\n", pList->head->next);
		printf("&pList->tail=%p\n", pList->tail);
		printf("&pList->cnt=%d\n", pList->cnt);

	}
}