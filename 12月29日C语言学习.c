#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t mylen(const char* s)
{
	int idx = 0;
	while (s[idx] != '\0') {
		idx++;
	}
	return idx;
}


char* getmonth(int n)
{
	//�������
	char* month[] = { "0","January","February","March","April","May","June","July","August","September","October","November","December",0 };
	if (n > 0 && n < 13) {
		return month[n];
	}
	return NULL;
}

int jolly(void)
{
	printf("For he's a jolly good fellow!\n");
	return 0;
}

int deny(void)
{
	printf("Which nobody can deny!\n");
	return 0;
}

int br(void)
{
	printf("Brazil,Russia");
	return 0;
}

int ic(void)
{
	printf("India,China");
}

int two(void)
{
	printf("two\n");
	return 0;
}
int one_three(void)
{
	printf("One\n");
	two();
	printf("three\n");
	return 0;
}


int main(int argc,char const *argv[])
{
	//char line[] = "Hello";
	//printf("strlen=%lu\n", strlen(line));
	//printf("sizeof=%lu\n", sizeof(line));



	//���ַ����������·ݷ���
	//int n;
	//char* i=NULL;

	//printf("��֪�����·ݵ�Ӣ�ĵ��ʣ�");
	//scanf("%d",&n);
	//i = getmonth(n);
	//printf("%p\n", i);//00007FF6B3A59D9C,00007FF76D4B9DA4,00007FF73C689E90
	//printf("%s\n", i);
	//if (i != NULL) {
	//	printf("%s",i);
	//}
	//else {
	//	printf("�����������������롣");
	//}



	//��ͷ��int main������������ ��  int argc,const char *argv[] ��ʲô��
	//int i;
	//for (i = 0;i < argc;i++) {
	//	printf("%d:%s\n",i,argv[i]);
	//}
	//argc,ԭ���Ǳ�ʾ��ִ�г��������;argv[] �����ռ����п�ִ�г���� ���ơ�


	//3.���ַ��������

	//int putchar(int c);
 //   int getchar(void);

	//int ch;
	//while ((ch = getchar()) != EOF) {
	//	putchar(ch);
	//}
	//printf("EOF\n");//����ctrl+c �Ϳ������EOF ��������

	
	//4.Malloc

	//int number;
	//int* a;
	//int i;
	//printf("����������");
	//scanf("%d",&number);
	//a = (int*)malloc(number * sizeof(int));
	//for (i = 0;i < number;i++) {
	//	scanf("%d",&a[i]);
	//}
	//for (i = number - 1;i >= 0;i--) {
	//	printf("%d ",a[i]);
	//}
	//free(a);

 //   
	//int age,day;
	//printf("����������䡣");
	//scanf("%d",&age);

	//day = age * 365;
	//printf("���Ѿ�����%d���ˡ�\n",day);



	//jolly �� deny ����
	//jolly();
	//jolly();
	//jolly();
	//deny();

	//br,ic����
	//br();
	//printf(",");
	//ic();
	//printf("\n");
	//ic();
	//printf(",\n");
	//br();

	//
	//int toes = 10;
	//int i, j;
	//i = toes *2;
	//j = toes *toes;

	//printf("toes=%d\n",toes);
	//printf("toes������=%d\n", i);
	//printf("toes��ƽ��=%d\n", j);

    //�������ú���
	printf("Starting now:\n");
	one_three();
	printf("Done!");

	return 0;
}
