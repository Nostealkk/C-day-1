#pragma once


#ifndef _GAME_EAT_
#define _GAME_EAT_
#define xlength 50
#define ylength 20


typedef struct _map {
	int map[ylength][xlength];
}Map;

typedef struct _bodypc {
	int a;//这个值是为了输出在数组里面的值
	struct _map *loc;//在二维数组里面的位置
	struct _body *next;//链表形成蛇的身体
}Bodypc;

typedef struct _body {
	struct _bodypc *head;//指定蛇的头部
	struct _bodypc *tail;//指定蛇的尾巴
}Body;

#endif // !_GAME_EAT_
