#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
	//1. for ѭ��
	//int a;

	//scanf("%d",&a);
	//int fact = 1;

	//int i = 1;
	//while (i <= a) {
	//	fact *= i;
	//	i++;
	//}
	//printf("%d!=%d\n", a, fact);

    //2.����˽�
	//int a;
	//
	//int fact = 1;

	//scanf("%d", &a);
	//int b = a;
	////for (fact = 2;fact <= a;fact++) {//fact��2��ʼ����
	////	b *= fact;
	////}

	//for (a = a;a > 1;a--) {
	//	fact *= a;
	//	printf("%d,%d,%d\n",a, b, fact);
	//}//��Ȼֱ����a������㣬���ǻ���Ҫ��b��¼a����������Ȼ���ں���ľ������������a=a������ʽ�ǿ���ʡ���ġ�

	//printf("%d�Ľ׳���%d.\n",b,fact);


	//int i;

	//for (i = 0;i <= 5;i = i + 1) {
	//	printf("%d\n", i);
	//}



    //3. ѭ���ļ����ѡ��

    //int i;

	//for (i = 1;i <= 5;i++) {
	//	printf("i=%d\n", i);
	//}

	//for (i = 0;i < 5;i++) {
	//	printf("i=%d\n", i);
	//}

	//printf("\n���i=%d\n",i);


    //4. ѭ������
	//int x;
	//scanf("%d", &x);

	//int i;
	//int isprime = 1; // x ������
	//for (i = 2;i < x;i++) {
	//	if (x % i == 0) {
	//		isprime = 0;
	//		break;//���break��Ϊ�˲�������������ƣ�
	//	}
	//}
	//if (isprime == 1) {
	//	printf("��������\n");
	//}
	//else {
	//	printf("����������\n");
	//}



	//5. ��ô�ó���д��100���ڵ������أ�
	//int x;


	////scanf("%d",&x);
	//x = 6;
 //   
	//for (x = 2;x < 100;x++) {
	//	int i;
	//	int isprime = 1;
	//	for (i = 2;i < x;i++) {
	//		if (x % i == 0) {
	//			isprime = 0;
	//			break;
	//		}
	//	}
	//	if (isprime == 1) {
	//		printf("%d��\n",x);
	//	}
	//}
	//printf("\n");


	//6. ��ôҪ�ҵ�50��������ֹͣ�أ�

    int x;
	x = 2;
	int cnt = 0;

	//for (x = 2;x < 100;x++) {
	while (cnt<50)
	{
		int i;
		int isprime = 1;
		for (i = 2;i < x;i++) {
			if (x % i == 0) {
				isprime = 0;
				break;
			}
		}
		if (isprime == 1) {
			printf("%d ", x);
			cnt++;
		}
		x++;
	}
	printf("\n");



	return 0;
}

