#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>




struct time {
	int hour;
	int min;
	int seconds;
};

struct time timeupdate(struct time now)
{
	++now.seconds;
	if (now.seconds == 60) {
		now.seconds = 0;
		++now.min;
		if (now.min == 60) {
			now.min = 0;
			++now.hour;
			if (now.hour == 24) {
				now.hour = 0;
			}
		}
	}
	return now;
}

struct time *timeupdatep(struct time *now)
{
	++now->seconds;
	if (now->seconds == 60) {
		now->seconds = 0;
		++now->min;
		if (now->min == 60) {
			now->min = 0;
			++now->hour;
			if (now->hour == 24) {
				now->hour = 0;
			}
		}
	}
	return now;
}









struct point {
	int x;
	int y;
};

struct rectangle {
	struct point p1;
	struct point p2;
};

void printrectangle(struct rectangle p)
{
	printf("<%d,%d>to<%d,%d>\n",p.p1.x,p.p1.y,p.p2.x,p.p2.y);
}

typedef union {
	int i;
	char ch[sizeof(int)];

}CHI;

int gall=1 ;

int f(void)//全局变量
{
	printf("in %s gall=%d\n", __func__,gall);
	gall += 2;
	printf("again in %s gall=%d\n", __func__, gall);
	return gall;
}

int ff(void)//静态本地变量
{
	int k = 0;
	static int all = 2;
	printf("&gall=%p\n",&gall);//静态本地变量就是挂着本地变量名头的全局变量。
	printf("&all=%p\n", &all);
	printf("&k=%p\n", &k);


	//printf("in %s all=%d\n", __func__, all);
	//all += 2;
	//printf("again in %s all=%d\n", __func__, all);
	//return all;
}


int main(int argc, char const* argv[])
{
	//结构中的结构
	int i;
	struct time testtime [5] = {{11,59,59},{12,0,0},{1,29,59},{23,59,59},{19,12,27}};
	
	
	struct time* time1 = &testtime;//用指针的方式运算。
    for (i = 0;i < 5;++i) 
	{
		printf("time is %.2i:%.2i:%.2i\n",
			time1->hour, time1->min, time1->seconds);

		time1 = timeupdatep(time1);

        printf("...one second late it's %.2i:%.2i:%.2i\n",
			time1->hour, time1->min, time1->seconds);
		time1++;
	}



	//for (i = 0;i < 5;++i) //将参数传过去运算
	//{
	//	printf("time is %.2i:%.2i:%.2i\n",
	//		testtime[i].hour, testtime[i].min, testtime[i].seconds);

	//	testtime[i] = timeupdate(testtime[i]);


	//	printf("...one second late it's %.2i:%.2i:%.2i\n",
	//		testtime[i].hour, testtime[i].min, testtime[i].seconds);

	//}


 	//结构中的结构中的数组
	//int i;
	//struct rectangle recet[] = { 
	//	{{1,2},{3,4}},
	//	{{5,6},{7,8}} 
	//}; //这个是把rectangle结构里的数组 第 0 个和第1 个的  p1的x和y，p2的x，y坐标写出来。 
	//for (i = 0;i < 2;i++) 
	//{ printrectangle(recet[i]); }


	////自定义数据类型
	//typedef int leng;
 //   leng i = 1;//leng 就替代了int 数据类型，leng就是int
	//typedef struct adate {
	//	int day;
	//	int month;
	//	int year;
	//}date;

	//date d = {1,1,1};// date以后就代表了struct adate



	//union的用处
	//CHI chi;
	//int i;
	//chi.i = 1234;
	//for (i = 0;i < sizeof(int);i++) {
	//	printf("%02hhX",chi.ch[i]);
	//}
	//printf("\n");



	//全局变量
	//printf("in %s gall=%d\n", __func__, gall);
 //   f();
	//printf("again in %s gall=%d\n", __func__, gall);


	//静态本地变量

	//ff();
	////ff();
	//ff();





	return 0;
}


