#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()

{
	int price = 0;

	printf("�������Ԫ����");
	scanf("%d", &price);//����ѧ����������򣬴ӿγ��︴�ƹ�����ʱ�����������������������ֱ�bug����������������ԭ����Ҫ��priceǰ���һ��&�����ڻ����Ǻ����Ϊʲô�����ǿ��Ըо������&��C���Ժ���Ҫ�Ĳ��֡�

	int change = 100 - price;

	printf("����%dԪ��\n", change);

	//printf("hello");
	return 0;
}