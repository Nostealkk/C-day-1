#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define bool int;
#define true 1;
#define false 0;

struct date {
	int day;
	int month;
	int year;
};

int numberofdays(struct date d)
{
	int days;
	const int dday[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if (d.month == 2 && isleap(d)) {
		days=29;
	}
	else {
		days=dday[d.month-1];
	}
	return days;
}


bool isleap(struct date d)
{
    bool int leap = false;
	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
		leap = true;
	}
	return leap;
}

struct point {
	int x;
	int y;
};

void getstruct(struct point p)//获得一个结构变量，但是没有返回值。
{
	scanf("%d",&p.x);
	scanf("%d", &p.y);
	printf("%d, %d\n",p.x,p.y);
}

void output(struct point p)
{
	printf("%d, %d",p.x,p.y);
}

struct point getstruct1(void)//在这里不获取结构变量，直接设置一个本地结构函数变量，输入变量然后返回一个结构变量。
{
	struct point p;
	scanf("%d", &p.x);
	scanf("%d", &p.y);
	printf("%d, %d\n", p.x, p.y);
	return p;
}

struct point* getstructp(struct point* p)
{
	scanf("%d", &p->x);
	scanf("%d", &p->y);
	printf("%d, %d\n", p->x, p->y);
	return p;

}
void print(const struct point* p)
{
	printf("%d, %d\n",p->x,p->y);
}


//int main(int argc, char const* argv[])
//{

	//int c;
	//while ((c = getchar()) != EOF) {
	//	putchar(c);
	//}
	//int i;
	//for (i = 0;i < argc;i++) {
	//	printf("%d:%s", argc, argv[i]);
	//}


	//结构函数
    //今天和明天

	//struct date today, tomorrow;

	//printf("请告诉我今天的年月日：");
	//scanf("%d %d %d",&today.year,&today.month,&today.day);

	//if (today.day > 31 || today.month > 12 || today.year>999999) { //这里加了一个条件来设置用户输入错误的月和日，年，
	//	printf("输入错误时间，请重试。");
	//}
	//else {
	//	if (today.day != numberofdays(today)) {
	//		tomorrow.day = today.day + 1;
	//		tomorrow.month = today.month;
	//		tomorrow.year = today.year;
	//	}
	//	else if (today.month == 12) {
	//		tomorrow.day = 1;
	//		tomorrow.month = 1;
	//		tomorrow.year = today.year + 1;
	//	}
	//	else {
	//		tomorrow.day = 1;
	//		tomorrow.month = today.month + 1;
	//		tomorrow.year = today.year;

	//	}
	//	printf("明天的日期是：%i年-%i月-%i日 。\n",
	//		tomorrow.year, tomorrow.month, tomorrow.day);
	//}
	//

	// 输入函数

	//struct point y = { 0,0 };
	//getstruct(y);
	//output(y);//这样返回来的值还是0,0. 


	//struct point x;//让设置的结构变量等于，函数getstruct1 输入之后的返回的值。
	//x = getstruct1();
	//output(x);


	//调用指针的方式
//	struct point p = { 0,0 };//函数的每次调用都是要按里面的逻辑走一遍的。下面的所有方式都可以运行。
//	getstructp(&p);
//	output(p);
//	output(*getstructp(&p));
//	print(getstructp(&p));
//	
//	*getstructp(&p) = (struct point){ 1,2 };//走完函数之后就被赋值1.2 也是可以的
//	//print(&p);
//	output(p);
//
//
//	getstructp(&p)->x = 0;//走完函数之后被指针赋值x=0 也是可以的。
//	output(p);
//	return 0;
//}