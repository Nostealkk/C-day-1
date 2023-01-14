#pragma once


#ifndef _NODE_H_
#define _NODE_H_

typedef struct _node {
	int value;
	struct _node* next;
}Node;

typedef struct _list {//第四种方案，设置一个结构list，里面放了一个head。
	Node *head;
	Node *tail;
	int cnt;
}List;

#endif // !_NODE_H_
