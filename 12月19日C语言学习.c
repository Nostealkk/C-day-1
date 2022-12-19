#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() 
{
//	//1. 凑硬币
//	int x;
//	int one, two, five;
//	int cnt = 0;//goto所需
//	printf("想知道有几种方式可以凑硬币吗？输入你想知道的金额(元)：");
//	scanf("%d",&x);
//	
//	for (one = 1;one < x * 10;one++) {
//		for (two = 1;two < x * 10 / 2;two++) {
//			for (five = 1;five < x * 10 / 5;five++) {
//				if (one + two * 2 + five * 5 == x * 10) {
//					printf("可以用%d个1角，加%d个2角，加%d个5角。得到：%d元\n",
//						one,two,five,x);
//					cnt++;//goto所需
//					if (cnt==10) {//goto所需
//						goto out;//这个goto是跟下面的out配合的可以在多层循环里直接跳出去，不过老师建议不要乱用。
//					}
//				}
//			}
//		}
//	}
//out://goto所需



	////2. 前n项求和

	//int n;
	//int i;
	//double sum = 0.0;
	//
	//scanf("%d", &n);
	//for (i = 1;i <= n;i++) {
	//	sum += sum * 1.0 / i;
	//}

	//printf("f(%d)=%f\n", n, sum);


	////为了实现+1-1的效果，增加一些改动

	//int n;
	//int i;
	//double sum = 0.0;
	//int sign = 1;//或者可以让sign变成double 1.0，这样可以去掉1.0这个量了 

	//scanf("%d", &n);
	//for (i = 1;i <= n;i++) {
	//	sum += sign*1.0 / i;//去掉这里的1.0
	//	sign = -sign;
	//}

	//printf("f(%d)=%f\n", n, sum);


	//3. 整数分解

	int x;
	//scanf("%d", &x);

	x =13425;

	//方案1
	//int t = 0;
	//do {
	//	int d = x%10;
	//	t = t * 10 + d;
	//	x /= 10;
	//} while (x > 0);
	//printf("x=%d,t=%d\n",x,t);//这里先逆序一边，然后把t的值赋予x，让下面的式子有空格的再逆序一遍。 
	//x = t;
	//
	//do {
	//	int d = x % 10;
	//	printf("%d",d);
	//	if (x > 9) {
	//		printf(" ");//到个位数的时候就不会输出空格了
	//	}
	//	x /= 10;
	//} while (x > 0);
	//printf("\n");


	//方案2

	//int mask = 10000;
	//do {
	//	int d = x / mask;
	//	printf("%d",d);
	//	if (mask > 9) {
	//		printf(" ");
	//	}
	//	x %= mask;
	//	mask /= 10;
	//} while (mask > 0);

	//printf("\n");

	//方案3

	int mask=1;//这里设置一个计数器来算mask需要多少倍
	int cnt=1;//再求这是一个几位数。
	int t = x;
	while (t>9){
		t /= 10;
		cnt++;
		mask*=10;
	}//这个循环不能用do-while 是因为如果输入x=1的话，先做一次循环，x已经是0不符合条件了但是到后面才判断。
	printf("这是一个%d位数。\n",cnt);
	//printf("%d", mask);
	do {
		int d = x / mask;
		printf("%d",d);
		if (mask > 9) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	} while (mask > 0);
	printf("\n");



	return 0;
 }