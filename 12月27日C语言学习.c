#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

void minmax(int a[], int len, int* min, int* max);

void minmax(int a[], int len, int* min, int* max)
{
	int i;
	*min = *max = a[0];
	for (i = 0;i < len;i++) {
		if (a[i] < *min) {
			*min = a[i];
		}
		if (a[i] > *max) {
			*max = a[i];
		}
	}
}


void f(int* p)
{
	printf("p=%p\n",p);
	printf("p=%d\n",*p);
	*p = 26;
}

void g(int k)
{
	printf("k=%d\n",k);
}

int main(void) {
	//1. ��ά����

	//const int size = 3;
	//int board[3][3];
	//int i, j;
	//int numofx;
	//int numofo;
	//int result = -1;//-1 ��û��Ӯ��1��xӮ��0��oӮ


	////�������
	//for (i = 0;i < size;i++) {
	//	for (j = 0;j < size;j++) {
	//		scanf("%d",&board[i][j]);
	//	}
	//}

	////�����

	//for (i = 0;i < size && result == -1;i++) {
	//	numofo = numofx = 0;
	//	for (j = 0;j < size;j++) {
	//		if (board[i][j] == 1) {
	//			numofx++;
	//		}
	//		else {
	//			numofo++;
	//		}
	//	}
	//	if (numofo == size) {
	//		result = 0;
	//	}
	//	else if (numofx == size) {
	//		result = 1;
	//	}
	//}

	////�����
	//if (result == -1) {
	//	for (j = 0;j < size&&result==-1;j++) {
	//		numofo = numofx = 0;
	//		for (i = 0;i < size;i++) {
	//			if (board[i][j] == 1) {
	//				numofx++;
	//			}
	//			else {
	//				numofo++;
	//			}
	//		}
	//		if (numofo == size) {
	//			result = 0;
	//		}
	//		else if (numofx == size) {
	//			result = 1;
	//		}
	//	}
	//}

	////���Խ���
	//numofo = numofx = 0;
	//for (i = 0;i < size;i++) {
	//	if (board[i][i] == 1) {
	//		numofx++;
	//	}
	//	else {
	//		numofo++;
	//	}
	//}
	//if (numofo == size) {
	//	result = 0;
	//}
	//else if (numofx == size) {
	//	result = 1;
	//}

	////���б�Խ�
	//numofo = numofx = 0;
	//for (i = 0;i < size;i++) {
	//	if (board[i][size - i - 1] == 1) {
	//		numofx++;
	//	}
	//	else {
	//		numofo++;
	//	}
	//}
	//if (numofo == size) {
	//	result = 0;
	//}
	//else if (numofx == size) {
	//	result = 1;
	//}




	//2. ָ��

	//int a[] = { 1,2,3,4,5,6,7,8,9,10,14,24,33,55 };
	//int min, max;
	//minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	//printf("min=%d,max=%d\n",min,max);


	//int i= 6;
	//printf("&i= %p\n",&i);
	//f(&i);
	//g(i);
	//printf("i=%d\n", i);
	//printf("i�ĵ�ַ=%p\n", &i);



	//3. ָ������
    char ac[] = { 0,1,2,3,4,5,6,7,8,9, };
	char* p = ac;
	printf("p  =%p\n",p);
	printf("p+1=%p\n", p + 1);

	int ai[] = { 0,1,2,3,4,5,6,7,8,9, };
	int *q = ai;
	printf("q  =%p\n", q);
	printf("q+1=%p\n", q + 1);
	return 0;
}
