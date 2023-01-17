#define _CRT_SECURE_NO_WARNINGS 1


#include "game_eat.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>

//地图的大小
#define xlength 50
#define ylength 20


//用一个结构定义一个二维数组用来存放内容
typedef struct _map {
	char map[ylength][xlength];
}Map;

/*制作贪吃蛇游戏的开始，首先是用什么样的技术制作这个小游戏。根据我所学过的知识，我很容易就联想到了二维数组，
所以我想设置一个二维数组当做地图，然后通过改变数组里面指定位置的数字，模拟出一条蛇在这个地图里面找食物的情况。

0 在这个数组里作为空地，1 作为边界 ，-1 代表食物， 2代表蛇头，3，4,5 这些大于2 的数字代表蛇的身体。

程序流程如下

初始化（地图，蛇，食物）——》 玩家输入指令——》 获取指令，判断指令，执行指令——》是否触发结束条件？ -是——》 结束游戏
                                                                                   -否——》 将数组内容以字符形式输出
*/



//负责蛇的移动部分
int move(int *length,int control,Map *pmap);

//负责将每次数组的内容输出
void print(Map* pmap);

//获得玩家指令
int getcontrol(int *control);

//初始化游戏内容
int start(int* length,int *control,Map *pmap);

int welcome();
void gg();

int main(int argc, char const argv[])
{
	//初始化阶段
	Map map;
	int control;
	int output;
	int length = 0;

		
	start(&length, &control, &map);

    while (1) 
	{
		//操控
		control = getcontrol(control);
        output = move(&length, control, &map);
        if (output == 1) {//如果死了，输出
			break;
		}
		else {	//如果没死，输出数组
					print(&map);
					//printf("%d", control);
					//printf("%d", output);
		}
		Sleep(500);//用暂时挂起设置游戏速度
	    }
    
	system("cls");
	gg();


	//else {
	//	exit(0);
	//}
	////结束游戏后输出 game over，以及是否重新开始选项

	//system("cls");
	//gameover();//如果输入1 重新开始，如果是0 就结束 。
	//int gg=0;
	//scanf("%d",&gg);
	//if (gg) {
	//	goto re;
	//}
	//else {

	//}

	return 0;
}

int getcontrol(int control)
{
	int mm = -1;//用一个值来代表玩家操控的状态
	if (_kbhit()) //_kbhit 是函数库里conio.h 的函数，检查是否有敲击键盘。
	{
		switch (_getch())//用conio函数里面的getch获得 按键
		{
		case 'w':case'W':mm = 0;break;
		case 's':case'S':mm = 3;break;
		case 'a':case'A':mm = 1;break;
		case 'd':case'D':mm = 2;break;
		}
		if (mm != -1 && (control + mm) != 3)//这里设置蛇不能反向走
		{
			control = mm;
		}
	}
	return control;
}

int start(int* length, int* control, Map * pmap)
	{
		//初始化方向为向下
		*control = 3;

		//初始化蛇的长度为 3
		*length = 3;

		//初始化蛇的位置
		pmap->map[4][30] = 3;
		pmap->map[5][30] = 2;
		pmap->map[6][30] = 1;

		//初始化食物的位置
		pmap->map[8][35] = -1;
	}

int move(int* length, int control, Map *pmap)
{
	int x, y;//遍历数组
	int h_x, h_y;//用来运算蛇头的下一步的坐标


	for (y = 0;y < ylength;y++) {
		for (x = 0;x < xlength;x++) {
			if (pmap->map[y][x] == *length) //运算蛇的尾巴
			{
				pmap->map[y][x] = 0;
			} 
			else if (pmap->map[y][x]>1) //运算蛇的身体
			{
				pmap->map[y][x] += 1;
			}
			else if (pmap->map[y][x]==1)//运算蛇的头
			{
				pmap->map[y][x] += 1;
				//同时确定下一个蛇头的坐标,引入control的值来确定。
				switch (control) {
				case 0:h_y = y - 1, h_x = x;break;//向上移动
				case 1:h_y = y, h_x = x - 1;break;//向左移动
				case 2:h_y = y, h_x = x + 1;break;//向右移动
				case 3:h_y = y + 1, h_x = x;break;//向下移动
				}
			}
		}
	}

	//如果蛇头吃到食物
	if (pmap->map[h_y][h_x] == -1) 
	{
		pmap->map[h_y][h_x] = 1;
		*length = *length + 1;

		//重新随机生成食物
		while (1)
		{
			y = rand() % (ylength - 2) + 1, x = rand() % (xlength - 3) + 1;
			if (pmap->map[y][x] == 0)
			{
				pmap->map[y][x] = -1;
				break;
			}
		}
	}
	//蛇头如果撞到自己，或者撞到
	else if (pmap->map[h_y][h_x] > 0 || h_y == ylength || h_y < 0 || h_x == xlength || h_x <0) 
	{
		return 1;
	}
	else //让预期前往的下一个数组的值成为代表蛇头的值 1 。 
	{
		pmap->map[h_y][h_x] = 1;
	}
	return 0;
}

void print(Map* pmap)
{
	int x, y;
	system("cls");
	//将数组的内容以字符的方式输出

		//输出第一行
	for (x = 0;x < xlength;x++) {
		if (x == 0) {
			printf("┏");
		}
		else if (x == xlength - 1) {
			printf("┓");
		}
		else {
			printf("━");
		}
	}
	printf("\n");

	//输出中间部分
	for (y = 1;y < ylength;y++) {
		for (x = 0;x < xlength - 1;x++) {
			if (x == 0) {
				printf("┃");
			}
			else if (pmap->map[y][x] == 1)
			{
				printf("@");
			}
			else if (pmap->map[y][x] > 1)
			{
				printf("●");
			}
			else if (pmap->map[y][x] == -1)
			{
				printf("★");
			}
			else {
				printf(" ");
			}
		}  if (x == xlength - 1) {
			printf("┃");
		}
		printf("\n");
	}



	//输出最后一行
	for (x = 0;x < xlength;x++) {
		if (x == 0) {
			printf("┗");
		}
		else if (x == xlength - 1) {
			printf("┛");
		}
		else {
			printf("━");
		}
	}
	printf("\n");
}

//int welcome()
//{
//	printf("                                         \n");
//	printf("                                         \n");
//	printf("             欢迎来到贪吃蛇！               \n");
//	printf("                                         \n");
//	printf("                                         \n");
//	printf("                                         \n");
//	printf("       按 1 开始游戏    按0退出游戏         \n");
//	printf("                                         \n");
//	printf("                                         \n");
//	printf("           williamkk    制作              \n");
//	printf("                                         \n");
//	int a;
//	
//	scanf("%d", &a);
//	return a;
//}


void gg()
{
	printf("                                         \n");
	printf("                                         \n");
	printf("                                         \n");
	printf("                                         \n");
	printf("                                         \n");
	printf("             GAME    OVER                \n");
	printf("                                         \n");
	printf("                                         \n");
	printf("                                         \n");
	printf("                                         \n");
	printf("                                         \n");
}