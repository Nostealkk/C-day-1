#pragma once


#ifndef _GAME_EAT_
#define _GAME_EAT_
#define xlength 50
#define ylength 20


typedef struct _map {
	int map[ylength][xlength];
}Map;

typedef struct _bodypc {
	int a;//���ֵ��Ϊ����������������ֵ
	struct _map *loc;//�ڶ�ά���������λ��
	struct _body *next;//�����γ��ߵ�����
}Bodypc;

typedef struct _body {
	struct _bodypc *head;//ָ���ߵ�ͷ��
	struct _bodypc *tail;//ָ���ߵ�β��
}Body;

#endif // !_GAME_EAT_
