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
	//����

	//int x;
	//double sum = 0;
	//int cnt = 0;
	//int number[100];//������һ�����飬ÿ����Ԫ����һ��int������100int
	//scanf("%d",&x);
	//while (x != -1) {//-1������ʽ��break��
	//	number[cnt] = x;//ÿһ�ζ������ֻḳֵ�����鵱�еĵ�Ԫ��
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

	//2. ���������

	//const int number = 10;//��������������е�10,���ǲ������á�
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
	�ҳ�key������a�е�λ��
	@param key ҪѰ�ҵ�����
	@param a ҪѰ�ҵ�����
	@param length ����a�ĳ���
	@return ����ҵ�����������a�е�λ�ã�����Ҳ����򷵻�-1
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
	//printf("������һ�����֣�");
	//scanf("%d",&x);
	//loc = search(x, a, sizeof(a) / sizeof(a[0]));
	//if (loc != -1) {
	//	printf("%d�ڵ�%d��λ����\n",x,loc+1);//�����loc��1 ����Ϊ���ص�ֵ�Ǵ�������ȡ�ģ������Ǵ�0��ʼ����ġ�
	//}
	//else {
	//	printf("%d������\n");
	//}



	//3. ��������ӣ�����
	//int x;
	//scanf("%d",&x);
	//if (isprime(x)) {
	//	printf("%d������\n",x);
	//}
	//else {
	//	printf("%d��������\n",x);
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
	//	printf("\n");//���ʽ��ֻ��Ϊ��������ͷ����������
	//}

	//while (count < number) {
	//	if (isprime(i, prime, count)) {//�������ĺ���
	//		prime[count++] = i;//���count ++ ����2���¡���1.�� i ��ֵ������ ��������±�Ϊ1 �ĸ�����֮��2. �����ƶ�һλ���´η����±�Ϊ2 �ĸ���� 
	//	}
	//	{
	//		printf("i=%d \t cnt=%d\t",i,count);//���ʽ����û�ο�ʼʱ��ʾ����i���ĸ�����cnt���㵽�ڼ��������ˡ�
	//		int i;
	//		for (i = 0;i < number;i++) {
	//			printf("%d\t",prime[i]);//���ʽ���ǰ�Ŀǰ�ҵ������������������ʾ����һ���ϡ�Ȼ����һ�С�
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


	//����������

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