#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
	//1. 九九乘法表
	//int n;
	//scanf("%d",&n);
	//int i=1;
	//
	//while (i <= n) {
	//	int j = 1;
	//	while (j <= i) {
	//		int t = j*i;
	//		printf("%d*%d=%d",j,i,t);
	//		if (t<10) {
	//			printf("   ");
	//		}
	//		else {
	//			printf("  ");
	//		}
	//		j++;
	//	}
	//	printf("\n");
	//	i++;
	//}



	//2 。统计素数并且求和
	//int m ;
	//int n ;
	//int i;
	//int cnt=0;
	//int sum=0;

	//scanf("%d %d",&m,&n);

	//for(i=m;i<=n;i++){
	//	
	//	int isprime = 1;
	//	int k;
	//	for (k = 2;k < i - 1;k++) {//这里式子的意思是尝试从2到i-1个数里面是否有除余是0的数字，i-1是避免k等于i本身。只要每次除余下来都不是0，那么这个数就是素数。只能被1和自身整除。
	//		if (i % k == 0) {
	//			isprime = 0;
	//			break;
	//		}
	//	}
	//	//判断i是不是素数。
	//	if (isprime ) {
	//		cnt++;
	//		sum += i;
	//	}
	//}
	//printf("%d %d", &cnt, &sum);



	//3.猜数游戏升级版
	int number,n;//输入猜大小的数让计算机猜
	int cnt=0;//输入猜测多少次让计算机统计
	int inp;
	int finished=0;
	scanf("%d %d",&number,&n);
	do {
		scanf("%d",&inp);
		cnt++;
		if (inp < 0) {
			printf("Game Over\n");
			finished = 1;
		} else if (inp > number) {
			printf("Too big\n");
		} else if (inp < number) {
			printf("Too smaill");
		} else {
			if ((cnt == 1)) {
				printf("Bingo!\n");
			}
			else if (cnt <= 3) {
				printf("Luck You!\n");
			}
			else {
				pritnf("Good Guess!\n");
			}
			finished = 1;
		}if (cnt == n) {
			if (!finished) {
				printf("Game Over!\n");
				finished = 1;
			}
		}
	} while (!finished);




	return 0;
}