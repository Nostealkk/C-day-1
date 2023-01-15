#define _CRT_SECURE_NO_WARNINGS 1


#include "game_eat.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void boundary();

void start();

void game();

void map();

void food();

void snake();

void died();


int main(int argc, char const argv[])
{
	//printf("%d\n", 0xCC);
	//printf("%d\n", 0xB0);

	//printf("%d\n", 0xB3);
	//printf("%d\n", 0xD4);

	//printf("%d\n", 0xC9);
	//printf("%d\n", 0xDF);

	printf("汉");
	boundary();


	return 0;
}

void boundary()
{
	int x, y;
	//char* k;
	char p[20][50] = {"0"};
	//k = (char*)malloc(sizeof(char)*20*50);

	for (y = 0;y<20;y++) {
		for (x = 0;x < 50;x++) {
			if (y==0||y==19) {
				p[y][x] = '5';
			} else if (0<y<19){
				if (x == 0 || x == 48) {
					p[y][x] = '1';
				}
				else if (0<x<49){
					p[y][x] = ' ';
				}
			}
	  }
	}

	p[5][24] = 186;
	p[5][26] = 186;


	for (y=0;y < 20;y++) {
		for (x = 0;x < 50;x++) {
			if (x<49) {
				printf("%c", p[y][x]);
			}
			else {
				printf("\n");
			}

		}
	}

	//free(p);
	//char* p = NULL;
}

void start()
{
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$                                                                $\n");
	printf("$                                                                $\n");
	printf("$                                                                $\n");
	printf("$                           贪吃蛇                                $\n");
	printf("$                                                                $\n");
	printf("$                                                                $\n");
	printf("$                                                                $\n");
	printf("$                                                                $\n");
	printf("$               按 1 进入游戏       按 0 退出游戏                    $\n");
	printf("$                                                                $\n");
	printf("$                                                                $\n");
	printf("$                                                                $\n");
	printf("$                                                                $\n"); 
	printf("$                  made by williamkk                             $\n");
	printf("$                                                                $\n");
	printf("$                                                                $\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

}

