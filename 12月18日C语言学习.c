#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
	//1. for 循环
	//int a;

	//scanf("%d",&a);
	//int fact = 1;

	//int i = 1;
	//while (i <= a) {
	//	fact *= i;
	//	i++;
	//}
	//printf("%d!=%d\n", a, fact);

    //2.计算乘阶
	//int a;
	//
	//int fact = 1;

	//scanf("%d", &a);
	//int b = a;
	////for (fact = 2;fact <= a;fact++) {//fact从2开始计算
	////	b *= fact;
	////}

	//for (a = a;a > 1;a--) {
	//	fact *= a;
	//	printf("%d,%d,%d\n",a, b, fact);
	//}//虽然直接让a参与计算，但是还是要用b记录a的输入数，然后在后面的句子输出。甚至a=a这个表达式是可以省掉的。

	//printf("%d的阶乘是%d.\n",b,fact);


	//int i;

	//for (i = 0;i <= 5;i = i + 1) {
	//	printf("%d\n", i);
	//}



    //3. 循环的计算和选择

    //int i;

	//for (i = 1;i <= 5;i++) {
	//	printf("i=%d\n", i);
	//}

	//for (i = 0;i < 5;i++) {
	//	printf("i=%d\n", i);
	//}

	//printf("\n最后i=%d\n",i);


    //4. 循环控制
	//int x;
	//scanf("%d", &x);

	//int i;
	//int isprime = 1; // x 是素数
	//for (i = 2;i < x;i++) {
	//	if (x % i == 0) {
	//		isprime = 0;
	//		break;//这个break是为了不是素数的数设计，
	//	}
	//}
	//if (isprime == 1) {
	//	printf("是素数。\n");
	//}
	//else {
	//	printf("不是素数。\n");
	//}



	//5. 怎么让程序写出100以内的素数呢？
	//int x;


	////scanf("%d",&x);
	//x = 6;
 //   
	//for (x = 2;x < 100;x++) {
	//	int i;
	//	int isprime = 1;
	//	for (i = 2;i < x;i++) {
	//		if (x % i == 0) {
	//			isprime = 0;
	//			break;
	//		}
	//	}
	//	if (isprime == 1) {
	//		printf("%d。\n",x);
	//	}
	//}
	//printf("\n");


	//6. 怎么要找到50个素数就停止呢？

    int x;
	x = 2;
	int cnt = 0;

	//for (x = 2;x < 100;x++) {
	while (cnt<50)
	{
		int i;
		int isprime = 1;
		for (i = 2;i < x;i++) {
			if (x % i == 0) {
				isprime = 0;
				break;
			}
		}
		if (isprime == 1) {
			printf("%d ", x);
			cnt++;
		}
		x++;
	}
	printf("\n");



	return 0;
}

