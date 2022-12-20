#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main() {
	
	//1.求最大公约数

	//int a, b;
	//int min;

	//scanf("%d %d",&a,&b);
	//if (a < b) {
	//	min = a;
	//}
	//else {
	//	min = b;
	//}

	//int ret = 0;
	//int i;
	//for (i = 1;i <= min;i++) {//这里老师写的是i<min,不过这样就算不出来如果a就是a和b的最大公约数这种情况。所以我改良成了i<=min.
	//	if (a % i == 0) {
	//		if (b % i == 0) {
	//			ret = i;
	//		}
	//	}
	//}
	//printf("%d和%d的最大公约数是%d.", a, b, ret);

	//2. 辗转相除法求最大公约数
    /* ①如果b=0，计算结束，a就是最大公约数。
	* ②否则，计算a/b的余数，让a等于b，而b等于那个余数。
	* ③回到第一步
	*/

	//int a, b;
	//int t;
	//scanf("%d %d",&a,&b);

	//while (b != 0) {
	//	t = a % b;
	//	a = b;
	//	b = t;
	//} 
	//printf("gcd=%d\n",a);

	//3. 给定条件求整数集
	//int a;
	//scanf("%d", &a);
	//int i, j, k;
	//int cnt = 0;

	//i = a;
	//while (i <= a + 3) {
	//	j = a;
	//	while (j <= a + 3) {
	//		k = a;
	//		while (k <= a + 3) {
	//			if (i != j) {
	//				if (i != k) {
	//					if (j != k) {
	//						printf("%d%d%d", i, j, k);
	//						cnt++;
	//						if (cnt%6==0) {
	//							printf("\n");
	//						}
	//						else {
	//							printf(" ");
	//						}
	//					}
	//				}
	//			}
	//			k++;
	//		}
	//		j++;
	//	}
	//	i++;
	//}

	//for 循环式的解
	//for (i = a;i <= a + 3;i++) {
	//	for (j = a;j <= a + 3;j++) {
	//		for (k = a;k <= a + 3;k++) {
	//			if (i != j && i != k && j != k) {
	//				printf("%d",i*100+j*10+k);
	//				cnt++;
	//				if (cnt == 6) {
	//					printf("\n");
	//					cnt = 0;
	//				}
	//				else {
	//					printf(" ");
	//				}
	//			}
	//		}
	//	}
	//}


	//4. 水仙花数

	int n;
	scanf("%d", &n);
	int i=1;
	int first=1;
	while (i < n) {
		first *= 10;
		i++;
	}
	//printf("%d", first);

	i = first;
	while (i < first*10) {
		int t = i;
		int sum = 0;
		while (t > 0) {
			int d = t % 10;
			t /= 10;
			int p = d;
			int j = 1;
			while (j < n) {
				p *= d;
				j++;
			}
			sum += p;
		}
		if (sum == i) {
			printf("%d\n",i);
		}
		i++;
	}
	return 0;
}