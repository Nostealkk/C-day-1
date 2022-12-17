#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


int main()
{
	//1. 算平均数
	//int a;
	//int count = 0;
	//int number = 0;
	//
	//do {
	//	printf("输入你想计算的数：\n");
	//	scanf("%d", &a);
	//	if (a != -1) {
	//		count++;
	//		number += a;
	//	}
	//} while (a != -1);
	
	//只用while也能计算出相同的结果，并且每次输入少判断一次if
	//printf("输入你想计算的数：\n");
	//scanf("%d", &a);
	//while (a!=-1)
	//{
	//	number += a;
	//	count++;
	//	printf("输入你想计算的数：\n");
	//	scanf("%d", &a);
	//}
 //   
	//printf("你输入了%d个数字，这些数的平均数是:%f .\n",count,1.0*number/count);//1.0*number可以让number变成浮点数，再用%f表达出来。
	
	
	//2. 整数求逆

	int x;
	printf("输入你想逆序的数：");
	scanf("%d",&x);

	int digit;
	int ret = 0;

	while (x>0) {
		
		digit = x % 10;
		//printf("digit=%d\n",digit);
		ret = ret * 10 + digit;
		//printf("x=%d,digit=%d,ret=%d\n", x,digit,ret);
		x /= 10;
	}
    printf("最后答案是：%d", ret);
	
	

	//3.
	return 0;
}