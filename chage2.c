#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()

{
	/*int price = 0;
	int pay = 0;

	printf("��������Ʒ��Ԫ����");
	scanf("%d", &price);
	printf("������֧����Ԫ����");
	scanf("%d", &pay);

	int change = pay - price;

	printf("����%dԪ��\n", change);*/

	//printf("hello");

	//int a;
	//int b;

	//printf("�������һ��������");
	//scanf("%d", &a);

	//printf("������ڶ�������: ");
	//scanf("%d", &b);

	//printf("����������������ӵĹ��̺ͽ���ǣ�\n");
	//printf("%d+%d=%d\n",a,b,a+b);
	//	



	//������������ߵĳ���1Ӣ��=12Ӣ�� �� 1Ӣ��=0.3048��

	//printf("��ֱ�����Ӣ�ߺ�Ӣ��,""������\"5 7\"��ʾ5Ӣ�磬7Ӣ�ߣ�");

 //   double foot;
	//double inch;

	//scanf("%lf %lf", &foot, &inch);

	//printf("�����%lf�ס�\n", 
	//	((foot + inch / 12.0) * 0.3048));




	//����ʱ����

	int hour1, minute1;
	int hour2, minute2;

	printf("��������԰�������ʱ�������룺Сʱ ����(Сʱ�ͷ���֮����Ҫ��һ��\n");
	printf("������ʱ��һ�� ");
	scanf("%d %d", &hour1, &minute1);
	
	printf("������ʱ����� ");
    scanf("%d %d", &hour2, &minute2);

	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;

	int t = t2 - t1;

	printf("����ʱ�����%dСʱ��%d���ӡ�",t/60,t%60);

	return 0;
}

//
//int main()
//{
//	printf("%d\n", 66 % 20);//�ַ������棬����֮���%��ȡ��ļ����������
//
//	return 0;
//}

