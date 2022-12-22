#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
//	//1. n项求和
	//int n;
	//double dividend, divisor;
	//double sum=0.0;
	//int i;
	//double t;

	//scanf("%d",&n);

	//dividend = 2;
	//divisor = 1;

	//for (i = 1;i <= n;i++) {
	//	sum += dividend / divisor;
	//	t = dividend;
	//	dividend = dividend + divisor;
	//	divisor = t;
	//}
	//printf("%.2f\n",sum);


	//2. 约分最简公式
	//int dividend, divisor;
	//scanf("%d/%d",&dividend,&divisor);
	//int a, b,t;
	//a = dividend;
	//b = divisor;
	//while (b != 0) {
	//	t = a % b;
	//	a = b;
	//	b = t;
	//}

	//printf("%d/%d\n", dividend / a, divisor / a);


	////3. 念数字
	int x;
	scanf("%d",&x);

	if (x < 0) {
		printf("fu ");
		x = -x;
	}

	int mask = 1;
	int t = x;
	while (t > 9) {
		t /= 10;
		mask *= 10;
	}

	do {
		int d = x / mask;
		switch(d){
		case 0:printf("ling");break;
		case 1:printf("yi");break;
		case 2:printf("er");break;
		case 3:printf("san");break;
		case 4:printf("si");break;
		case 5:printf("wu");break;
		case 6:printf("liu");break;
		case 7:printf("qi");break;
		case 8:printf("ba");break;
		case 9:printf("jiu");break;
		}
		if (mask > 9) { 
			printf(" "); 
		}
		x %= mask;
		mask /= 10;
	} while (mask > 0);
	return 0;
}