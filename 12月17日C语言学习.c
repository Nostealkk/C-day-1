#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


int main()
{
	//1. ��ƽ����
	//int a;
	//int count = 0;
	//int number = 0;
	//
	//do {
	//	printf("����������������\n");
	//	scanf("%d", &a);
	//	if (a != -1) {
	//		count++;
	//		number += a;
	//	}
	//} while (a != -1);
	
	//ֻ��whileҲ�ܼ������ͬ�Ľ��������ÿ���������ж�һ��if
	//printf("����������������\n");
	//scanf("%d", &a);
	//while (a!=-1)
	//{
	//	number += a;
	//	count++;
	//	printf("����������������\n");
	//	scanf("%d", &a);
	//}
 //   
	//printf("��������%d�����֣���Щ����ƽ������:%f .\n",count,1.0*number/count);//1.0*number������number��ɸ�����������%f��������
	
	
	//2. ��������

	int x;
	printf("�����������������");
	scanf("%d",&x);

	int digit;
	int ret = 0;

	while (x>0) {
		
		digit = x % 10;
		//printf("digit=%d\n",digit);
		ret = ret * 10 + digit;
		//printf("x=%d,digit=%d,ret=%d\n", x,digit,ret);
		x /= 10;
	}
    printf("�����ǣ�%d", ret);
	
	

	//3.
	return 0;
}