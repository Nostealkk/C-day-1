#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()

{
	int price = 0;

	printf("请输入金额（元）：");
	scanf("%d", &price);//今晚学到了找零程序，从课程里复制过来的时候总是在输入数字求结果部分报bug，于是上网搜索，原来需要在price前面加一个&，现在还不是很清楚为什么，但是可以感觉到这个&是C语言很重要的部分。

	int change = 100 - price;

	printf("找您%d元。\n", change);

	//printf("hello");
	return 0;
}