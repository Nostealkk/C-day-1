#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
	//1. �žų˷���
	//int n;
	//scanf("%d",&n);
	//int i=1;
	//
	//while (i <= n) {
	//	int j = 1;
	//	while (j <= i) {
	//		int t = j*i;
	//		printf("%d*%d=%d",j,i,t);
	//		if (t<10) {
	//			printf("   ");
	//		}
	//		else {
	//			printf("  ");
	//		}
	//		j++;
	//	}
	//	printf("\n");
	//	i++;
	//}



	//2 ��ͳ�������������
	//int m ;
	//int n ;
	//int i;
	//int cnt=0;
	//int sum=0;

	//scanf("%d %d",&m,&n);

	//for(i=m;i<=n;i++){
	//	
	//	int isprime = 1;
	//	int k;
	//	for (k = 2;k < i - 1;k++) {//����ʽ�ӵ���˼�ǳ��Դ�2��i-1���������Ƿ��г�����0�����֣�i-1�Ǳ���k����i����ֻҪÿ�γ�������������0����ô���������������ֻ�ܱ�1������������
	//		if (i % k == 0) {
	//			isprime = 0;
	//			break;
	//		}
	//	}
	//	//�ж�i�ǲ���������
	//	if (isprime ) {
	//		cnt++;
	//		sum += i;
	//	}
	//}
	//printf("%d %d", &cnt, &sum);



	//3.������Ϸ������
	int number,n;//����´�С�����ü������
	int cnt=0;//����²���ٴ��ü����ͳ��
	int inp;
	int finished=0;
	scanf("%d %d",&number,&n);
	do {
		scanf("%d",&inp);
		cnt++;
		if (inp < 0) {
			printf("Game Over\n");
			finished = 1;
		} else if (inp > number) {
			printf("Too big\n");
		} else if (inp < number) {
			printf("Too smaill");
		} else {
			if ((cnt == 1)) {
				printf("Bingo!\n");
			}
			else if (cnt <= 3) {
				printf("Luck You!\n");
			}
			else {
				pritnf("Good Guess!\n");
			}
			finished = 1;
		}if (cnt == n) {
			if (!finished) {
				printf("Game Over!\n");
				finished = 1;
			}
		}
	} while (!finished);




	return 0;
}