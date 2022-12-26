#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <math.h>

int search(int key, int a[], int length)
{
	int ret = -1;
	int i;
	for (i = 0;i < length;i++) {
		if (a[i] == key) {
			ret = i;
			break;
		}
	}
	return ret;
}

int isprime(int x, int knownprimes[], int number0fKnownPrimes)
{
	int ret = 1;
	int i;
	for (i = 0;i < number0fKnownPrimes;i++) {
		if (x % knownprimes[i] == 0) {
			ret = 0;
			break;
		}
	}
	return ret;
}

int main(void) 
{
	//数组

	//int x;
	//double sum = 0;
	//int cnt = 0;
	//int number[100];//定义了一个数组，每个单元都是一个int，放了100int
	//scanf("%d",&x);
	//while (x != -1) {//-1是输入式的break，
	//	number[cnt] = x;//每一次读到数字会赋值给数组当中的单元。
	//	
	//	{
	//		int i;
	//		printf("%d\t",cnt);
	//		for (i = 0;i <= cnt;i++) {
	//			printf("%d\t",number[i]);
	//		}
	//		printf("\n");
	//	}
	//	
	//	sum += x;
	//	cnt++;
	//	scanf("%d",&x);
	//}
	//if (cnt > 0) {
	//	printf("%f\n",sum/cnt);
	//	int i ;
	//	for (i = 0;i < cnt;i++) {
	//		if (number[i] > sum / cnt) {
	//			printf("%d\n",number[i]);
	//		}
	//	}
	//}

	//2. 数组的例子

	//const int number = 10;//用来替代下面所有的10,但是不起作用。
	//int x;
	//int count[10];
	//int i;


	//for (i = 0;i < 10;i++) {
	//	count[i] = 0;
	//}
	//scanf("%d",&x);
	//while (x != -1) {
	//	if (x >= 0 && x <= 9) {
	//		count[x]++;
	//	}
	//	scanf("%d", &x);
	//}
	//for (i = 0;i < 10;i++) {
	//	printf("%d:%d\n",i,count[i]);
	//}




	/**
	找出key在数组a中的位置
	@param key 要寻找的数字
	@param a 要寻找的数组
	@param length 数组a的长度
	@return 如果找到，返回其在a中的位置；如果找不到则返回-1
	*/


	//int a[] = { 2,4,6,7,1,3,5,9,11,13,23,14,32 };
	//{
	//	int i;
	//	for (i = 0;i < 13;i++) {
	//		printf("%d\t",a[i]);
	//	}
	//	printf("\n");
	//}

	//int x;
	//int loc;
	//printf("请输入一个数字：");
	//scanf("%d",&x);
	//loc = search(x, a, sizeof(a) / sizeof(a[0]));
	//if (loc != -1) {
	//	printf("%d在第%d个位置上\n",x,loc+1);//这里给loc加1 是因为返回的值是从数组内取的，数组是从0开始计算的。
	//}
	//else {
	//	printf("%d不存在\n");
	//}



	//3. 数组的例子，素数
	//int x;
	//scanf("%d",&x);
	//if (isprime(x)) {
	//	printf("%d是素数\n",x);
	//}
	//else {
	//	printf("%d不是素数\n",x);
	//}




	//const int number = 10;
	//int prime[10] = { 2 };
	//int count = 1;
	//int i = 2;
	//{
	//	int i;
	//	printf("\t\t");
	//	for (i = 0;i < number;i++) {
	//		printf("%d\t", i);
	//	}
	//	printf("\n");//这段式子只是为了做个表头，标清数列
	//}

	//while (count < number) {
	//	if (isprime(i, prime, count)) {//找素数的函数
	//		prime[count++] = i;//这个count ++ 做了2件事。：1.将 i 的值放在了 数组里的下标为1 的格子里之后，2. 往后移动一位，下次放在下标为2 的格子里。 
	//	}
	//	{
	//		printf("i=%d \t cnt=%d\t",i,count);//这段式子在没次开始时显示进度i是哪个数，cnt计算到第几个素数了。
	//		int i;
	//		for (i = 0;i < number;i++) {
	//			printf("%d\t",prime[i]);//这段式子是把目前找到的所有素数都输出显示在这一行上。然后换下一行。
	//		}
	//		printf("\n");
	//	}
	//	i++;
	//}
	//for (i = 0;i < number;i++) {
	//	printf("%d",prime[i]);
	//	if ((i + 1) % 5)printf("\t");
	//	else printf("\n");
	//}


	//构造素数表

	const int maxnumber = 25;
	int isprime[25];
	int i;
	int x;
	{
		int i;
		printf("\t\t");
		for (i = 2;i < maxnumber;i++) {
			printf("%d\t",i);
		}
	}
	printf("\n");
	for (i = 0;i < maxnumber;i++) {
		isprime[i] = 1;
	}
	for (x = 2;x < maxnumber;x++) {
		if (isprime[x]) {
			for (i = 2;i * x < maxnumber;i++) {
				isprime[i * x] = 0;
			}
		}
	}
	for (i = 2;i < maxnumber;i++) {
		if (isprime[i]) {
			printf("%d\t", i);
		}
	}
	printf("\n");

	return 0;
}