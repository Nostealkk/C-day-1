#define _CRT_SECURE_NO_WARNINGS 1


#include "game_eat.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//地图的大小
//#define xlength 50
//#define ylength 20
//

//用一个结构定义一个二维数组用来存放内容
//typedef struct _map {
//	char map[ylength][xlength];
//}Map;

//定义蛇的身体是怎么组成的
//typedef struct _body {
//	char a;
//	struct _body* next;
//}Body;

//typedef struct _body {
//	struct _bodypc *head;
//	struct _bodypc *tail;
//}Body;


//负责在数组里面制造边界
void boundary(Map *pmap);

//负责在数组里面输入界面
void startpage(Map *pmap);

//负责游戏整体运行
void game();

//负责食物的出现和消失
void food();

//负责蛇的出现和消失以及移动设定
void snake();

//设置死亡条件
void died();

//负责蛇的移动部分
void move();

//负责将每次数组的内容输出
void print(Map* pmap);

int control();


int main(int argc, char const argv[])
{
	Map map;
	//初试化阶段
	boundary(&map);
	food(&map);
	snake(&map);

	//操控阶段



	//输出结果阶段
	print(&map);
	
	
	return 0;
}

void boundary(Map *pmap)
{
	system("cls");
	int x, y;
	for (y = 0;y<ylength;y++) {
		for (x = 0;x < xlength;x++) {
			if (y==0||y==ylength-1) {
				pmap->map[y][x] =1;
			} else if (0<y<ylength-1){
				if (x == 0 || x == xlength-2) {
					pmap->map[y][x] =1;
				}
				else if (0<x<xlength-1){
					pmap->map[y][x] =0;
				}
			}
	  }
	}
}

//void startpage(Map *pmap)
//{
//	int a, b;
//
//	
//	pmap->map[5][17] = 204;
//	pmap->map[5][18] = 176;
//
//	pmap->map[5][20] = 179;
//	pmap->map[5][21] = 212;
//
//	pmap->map[5][23] = 201;
//	pmap->map[5][24] = 223;
//
//
//
//}

void print(Map *pmap)
{
	int y, x;
	for (y = 0;y < ylength;y++) {
		for (x = 0;x < xlength;x++) {
			if (x == xlength - 1) {
				printf("\n");
			}else if (pmap->map[y][x] == 1) {//这是边界
				printf("*");
			}else if (pmap->map[y][x] == 0) {//这是空地
				printf(" ");
			}else if (pmap->map[y][x] == -1) {//这是食物
				printf("★");
			}else if (pmap->map[y][x] == 2) {//这是蛇的头
				printf("@");
			}else if (pmap->map[y][x] >2) {//这是蛇的身子
				printf("^");
			}
		}

	}
}

void food(Map *pmap)
{
	unsigned int i, j;
	srand((unsigned int)time(NULL));
    i = rand() % (ylength-2)+1;
	j = rand() % (xlength-3)+1;
    if (pmap->map[i][j] == 0) 
	{
		pmap->map[i][j] = -1;
	}
	printf("%d\n", i);
	printf("%d\n", j);
}

void snake(Map*pmap)
{
	//初始化，先让蛇出现在棋盘之上
	pmap->map[5][10] = 2;
	pmap->map[5][11] = 3;
	pmap->map[5][12] = 3;


}

int control() {


}