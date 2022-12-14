#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()

{
	/*int price = 0;
	int pay = 0;

	printf("请输入物品金额（元）：");
	scanf("%d", &price);
	printf("请输入支付金额（元）：");
	scanf("%d", &pay);

	int change = pay - price;

	printf("找您%d元。\n", change);*/

	//printf("hello");

	//int a;
	//int b;

	//printf("请输入第一个整数：");
	//scanf("%d", &a);

	//printf("请输入第二个整数: ");
	//scanf("%d", &b);

	//printf("计算这两个整数相加的过程和结果是：\n");
	//printf("%d+%d=%d\n",a,b,a+b);
	//	



	//计算美国人身高的程序，1英尺=12英寸 ， 1英尺=0.3048米

	//printf("请分别输入英尺和英寸,""如输入\"5 7\"表示5英寸，7英尺：");

 //   double foot;
	//double inch;

	//scanf("%lf %lf", &foot, &inch);

	//printf("身高是%lf米。\n", 
	//	((foot + inch / 12.0) * 0.3048));




	//计算时间差——

	int hour1, minute1;
	int hour2, minute2;

	printf("本程序可以帮助计算时间差，请输入：小时 分钟(小时和分钟之间需要空一格）\n");
	printf("请输入时间一： ");
	scanf("%d %d", &hour1, &minute1);
	
	printf("请输入时间二： ");
    scanf("%d %d", &hour2, &minute2);

	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;

	int t = t2 - t1;

	printf("两个时间相距%d小时，%d分钟。",t/60,t%60);

	return 0;
}

//
//int main()
//{
//	printf("%d\n", 66 % 20);//字符串后面，逗号之后的%是取余的计算符号作用
//
//	return 0;
//}

