#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() 
{
//	//1. ��Ӳ��
//	int x;
//	int one, two, five;
//	int cnt = 0;//goto����
//	printf("��֪���м��ַ�ʽ���Դ�Ӳ������������֪���Ľ��(Ԫ)��");
//	scanf("%d",&x);
//	
//	for (one = 1;one < x * 10;one++) {
//		for (two = 1;two < x * 10 / 2;two++) {
//			for (five = 1;five < x * 10 / 5;five++) {
//				if (one + two * 2 + five * 5 == x * 10) {
//					printf("������%d��1�ǣ���%d��2�ǣ���%d��5�ǡ��õ���%dԪ\n",
//						one,two,five,x);
//					cnt++;//goto����
//					if (cnt==10) {//goto����
//						goto out;//���goto�Ǹ������out��ϵĿ����ڶ��ѭ����ֱ������ȥ��������ʦ���鲻Ҫ���á�
//					}
//				}
//			}
//		}
//	}
//out://goto����



	////2. ǰn�����

	//int n;
	//int i;
	//double sum = 0.0;
	//
	//scanf("%d", &n);
	//for (i = 1;i <= n;i++) {
	//	sum += sum * 1.0 / i;
	//}

	//printf("f(%d)=%f\n", n, sum);


	////Ϊ��ʵ��+1-1��Ч��������һЩ�Ķ�

	//int n;
	//int i;
	//double sum = 0.0;
	//int sign = 1;//���߿�����sign���double 1.0����������ȥ��1.0������� 

	//scanf("%d", &n);
	//for (i = 1;i <= n;i++) {
	//	sum += sign*1.0 / i;//ȥ�������1.0
	//	sign = -sign;
	//}

	//printf("f(%d)=%f\n", n, sum);


	//3. �����ֽ�

	int x;
	//scanf("%d", &x);

	x =13425;

	//����1
	//int t = 0;
	//do {
	//	int d = x%10;
	//	t = t * 10 + d;
	//	x /= 10;
	//} while (x > 0);
	//printf("x=%d,t=%d\n",x,t);//����������һ�ߣ�Ȼ���t��ֵ����x���������ʽ���пո��������һ�顣 
	//x = t;
	//
	//do {
	//	int d = x % 10;
	//	printf("%d",d);
	//	if (x > 9) {
	//		printf(" ");//����λ����ʱ��Ͳ�������ո���
	//	}
	//	x /= 10;
	//} while (x > 0);
	//printf("\n");


	//����2

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

	//����3

	int mask=1;//��������һ������������mask��Ҫ���ٱ�
	int cnt=1;//��������һ����λ����
	int t = x;
	while (t>9){
		t /= 10;
		cnt++;
		mask*=10;
	}//���ѭ��������do-while ����Ϊ�������x=1�Ļ�������һ��ѭ����x�Ѿ���0�����������˵��ǵ�������жϡ�
	printf("����һ��%dλ����\n",cnt);
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