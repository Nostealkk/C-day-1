#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int isprime(int i)
{
	int ret = 1;
	int k;
	for (k = 2;k < i - 1;k++) {
		if (i % k == 0) {
			ret = 0;
			break;
		}
	}
	return ret;
}

void sum(int begin, int end)
{
	int i;
	int sum = 0;
	for (i = begin;i <= end;i++) {
		sum += i;
	}
	printf("%d��%d�ĺ���%d\n", begin, end, sum);
}



int main() {
	//1.   /6.3.2 �߼����㣺���߼��������룬�򣬷ǣ����㡣

	//int a = -1;
	//if (a >0 && a++ > 1) {
	//	printf("ok\n");
	//}
	//printf("%d\n",a);
	//
	
	
	//2. ��������
	
	//int m, n;
	//int sum=0;
	//int cnt = 0;
	//int i = 0;

	//scanf("%d %d",&m,&n);
	//if (m == 1) m = 2;
	//for (i = m;i <= n;i++) {
	//	if (isprime(i)) {
	//		sum += i;
	//		cnt++;
	//	}
	//}
	//printf("%d %d\n",cnt,sum);




	//3. ��ͺ���ʹ��

	sum(1, 10);







	return 0;
}