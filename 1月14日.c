#define _CRT_SECURE_NO_WARNINGS 1



#include "node.h"
#include <stdio.h>
#include <stdlib.h>


//typedef struct _node {
//	int value;
//	struct _node* next;
//}Node;
//


//用指针指向函数内的值直接运算

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
//		while (last->next) {//这里的last->next 意思是指如果还有东西在next里，next不是null的话，那么last就是这个node指向的next。while里面的值是 1
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
//typedef struct _list {/*第四种方案，设置一个结构list，里面放了一个head。
//	好处是可以方便后续优化，比如加上一个tail来帮助每次链表链接从最后一个开始算，
//	不要每次都从head 进入来运算 */
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

    /*先确认head 是否有东西，如果没有去直接让head和tail指向同一个p，
	因为这是第一个值，同时身为head和tail。
	如果此时head已经有值，那么新的p就是tail的next，而tail又指向了新的p
	认定新的p就是tail*/
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