#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//1.����нˮ
	//const double rate = 8.25;
	//const int standard = 40;
	//double pay = 0.0;
	//int hours;

	//printf("�����빤��ʱ����");
	//scanf("%d", &hours);
	//printf("���Ĺ���ʱ��Ϊ%d.\n", hours);

	//if (hours > standard)
	//	pay = rate * standard +
	//	(hours - standard) * (rate * 1.5);
	//else 
	//	pay = rate * standard;
	//
	//printf("���Ĺ���Ϊ%f����л���ĸ�����\n", pay);


	//2.�жϳɼ�
	//const int pass = 60;
	//int score;

	//printf("��������ĳɼ���");
	//scanf("%d", &score);

	//printf("��ĳɼ��ǣ�%d.\n", score);
	//if (score > pass)
	//	printf("��ϲ�㣬ͨ������ο��ԣ�\n");
	//else
	//	printf("���ź�����û��ͨ���˴ο��ԣ�\n");
	//printf("�ټ�������Ŭ���ɣ�");


	//3.Ƕ�׵�if-else
	//int a, b, c;

	//printf("������3����Ҫ�жϵ����֣�");
	//scanf("%d %d %d", &a, &b, &c);

	//int max = 0;

	//if (a > b) {
	//	if (a > c) {
	//		max = a;
	//	}
	//	else {
	//		max = c;
	//	}

	//}
	//else {
	//	if (b > c){
	//		max = b;
	//	}
	//	else {
	//		max = c;
	//	}
	//}

	//printf("�������ǣ�%d", max);


	//������if-else
	//float x;
	//int f;
	//if (x < 0) {
	//	f = -1;
	//}
	//else if (x = 0) {
	//	f = 0;
	//}
	//else if (x > 0) {
	//	f = 2 * x;
	//}

	//printf("%d", f);


	//switch-case ���
	
	//int type;

	//printf("��������1-7�������������ڼ���");
	//scanf("%d", &type);
	//
	//switch (type)
	//{
	//case 1:printf("monday\n");break;
	//case 2:printf("tuesday\n");break;
	//case 3:printf("wednesday\n");break;
	//case 4:printf("thurday\n");break;
	//case 5:printf("friday\n");break;
	//case 6:printf("saturday\n");break;
	//case 7:printf("sunday\n");break;

	//default:printf("error");break;
	//}

	//��֧���ɼ�ת���⣺

 //   int a;
	//int score;

	//printf("��������ĳɼ���");
	//scanf("%d",&a);

	//if (a >= 90) {
	//	score = 1;
	//}
	//else if (90 > a >= 80)
	//{
	//	score = 2;
	//}
	//else if (80 > a >= 70)
	//{
	//	score = 3;
	//}
	//else if (70 > a >= 60)
	//{
	//	score = 4;
	//}
	//else if (60 > a)
	//{
	//	score = 5;
	//}

	//switch (score)
	//{
	//case 1:printf("A\n");break;
	//case 2:printf("B\n");break;
	//case 3:printf("C\n");break;
	//case 4:printf("D\n");break;
	//case 5:printf("E\n");break;

	//default:printf("����");break;
	//}

	//���ø��ϸ�ֵ�������switch-case

	//int grade;
	//printf("������ĳɼ���");
	//scanf("%d", &grade);
	//grade /= 10;

	//switch (grade) {
	//case 10:
	//case 9:printf("A\n");break;
	//case 8:printf("B\n");break;
	//case 7:printf("C\n");break;
	//case 6:printf("D\n");break;
	//default:printf("E");break;
	//}
	//�������̵ı�̿��Կ������㷨˼ά����Ҫ�ԣ����ǲ������빤�ߵĿ������ÿ�����ߵ����ã�Ȼ��Ҫ���ѳ�����ȥ������ѧ����Ҫ�ԣ�����
	//������Ż����� �𣿺�ǿ��


    //ѭ�����
 //   
 //   int x;
	//int n=0;

	//printf("����һ�������֣�");
	//scanf("%d",&x);

	//n++;
	//x /= 10;
	//while (x>0)
	//{
	//	n++;
	//	x /= 10;
	//}

	//printf("%d\n", n);


	//do-while ѭ��

	//int x;
	//scanf("%d", &x);
	//int n = 0;
	//do {
	//	x /= 10;
	//	n++;
	//} while (x > 0);
	//	printf("%d", n);


    //������Ϸ

    srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;

	printf("���Ѿ������һ��1��100֮�������\n");
	do {
		printf("��һ����������Ƕ��٣�\n");
		scanf("%d",&a);
		count++;
		if (a > number) {
			printf("dale.\n");
		}
		else if (a < number) {
			printf("xiaole.\n");
		}
	} while (a != number);
	printf("��ϲ�㳢����%d�ξ��ҵ��˴𰸣�",count);

	//�׶��Ե�ʤ���������������Լ��ĵ�һ��С��Ϸ���ǳ����ģ�����




	return 0;
}