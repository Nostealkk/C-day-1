#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//1.计算薪水
	//const double rate = 8.25;
	//const int standard = 40;
	//double pay = 0.0;
	//int hours;

	//printf("请输入工作时长：");
	//scanf("%d", &hours);
	//printf("您的工作时长为%d.\n", hours);

	//if (hours > standard)
	//	pay = rate * standard +
	//	(hours - standard) * (rate * 1.5);
	//else 
	//	pay = rate * standard;
	//
	//printf("您的工资为%f，感谢您的付出！\n", pay);


	//2.判断成绩
	//const int pass = 60;
	//int score;

	//printf("请输入你的成绩：");
	//scanf("%d", &score);

	//printf("你的成绩是：%d.\n", score);
	//if (score > pass)
	//	printf("恭喜你，通过了这次考试！\n");
	//else
	//	printf("很遗憾，你没有通过此次考试！\n");
	//printf("再见！继续努力吧！");


	//3.嵌套的if-else
	//int a, b, c;

	//printf("请输入3个需要判断的数字：");
	//scanf("%d %d %d", &a, &b, &c);

	//int max = 0;

	//if (a > b) {
	//	if (a > c) {
	//		max = a;
	//	}
	//	else {
	//		max = c;
	//	}

	//}
	//else {
	//	if (b > c){
	//		max = b;
	//	}
	//	else {
	//		max = c;
	//	}
	//}

	//printf("最大的数是：%d", max);


	//级联的if-else
	//float x;
	//int f;
	//if (x < 0) {
	//	f = -1;
	//}
	//else if (x = 0) {
	//	f = 0;
	//}
	//else if (x > 0) {
	//	f = 2 * x;
	//}

	//printf("%d", f);


	//switch-case 语句
	
	//int type;

	//printf("输入数字1-7来决定今天星期几：");
	//scanf("%d", &type);
	//
	//switch (type)
	//{
	//case 1:printf("monday\n");break;
	//case 2:printf("tuesday\n");break;
	//case 3:printf("wednesday\n");break;
	//case 4:printf("thurday\n");break;
	//case 5:printf("friday\n");break;
	//case 6:printf("saturday\n");break;
	//case 7:printf("sunday\n");break;

	//default:printf("error");break;
	//}

	//分支：成绩转换题：

 //   int a;
	//int score;

	//printf("请输入你的成绩：");
	//scanf("%d",&a);

	//if (a >= 90) {
	//	score = 1;
	//}
	//else if (90 > a >= 80)
	//{
	//	score = 2;
	//}
	//else if (80 > a >= 70)
	//{
	//	score = 3;
	//}
	//else if (70 > a >= 60)
	//{
	//	score = 4;
	//}
	//else if (60 > a)
	//{
	//	score = 5;
	//}

	//switch (score)
	//{
	//case 1:printf("A\n");break;
	//case 2:printf("B\n");break;
	//case 3:printf("C\n");break;
	//case 4:printf("D\n");break;
	//case 5:printf("E\n");break;

	//default:printf("错误！");break;
	//}

	//利用复合赋值运算符和switch-case

	//int grade;
	//printf("输入你的成绩：");
	//scanf("%d", &grade);
	//grade /= 10;

	//switch (grade) {
	//case 10:
	//case 9:printf("A\n");break;
	//case 8:printf("B\n");break;
	//case 7:printf("C\n");break;
	//case 6:printf("D\n");break;
	//default:printf("E");break;
	//}
	//从这个简短的编程可以看出，算法思维的重要性，我们不能陷入工具的框框，熟练每个工具的作用，然后，要跳脱出工具去想象。数学的重要性！！！
	//这就是优化代码 吗？好强！


    //循环语句
 //   
 //   int x;
	//int n=0;

	//printf("输入一长串数字：");
	//scanf("%d",&x);

	//n++;
	//x /= 10;
	//while (x>0)
	//{
	//	n++;
	//	x /= 10;
	//}

	//printf("%d\n", n);


	//do-while 循环

	//int x;
	//scanf("%d", &x);
	//int n = 0;
	//do {
	//	x /= 10;
	//	n++;
	//} while (x > 0);
	//	printf("%d", n);


    //猜数游戏

    srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;

	printf("我已经想好了一个1到100之间的数。\n");
	do {
		printf("猜一猜这个数字是多少？\n");
		scanf("%d",&a);
		count++;
		if (a > number) {
			printf("dale.\n");
		}
		else if (a < number) {
			printf("xiaole.\n");
		}
	} while (a != number);
	printf("恭喜你尝试了%d次就找到了答案！",count);

	//阶段性的胜利！！，做出了自己的第一个小游戏，非常开心！！！




	return 0;
}