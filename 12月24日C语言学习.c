#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdbool.h>
int main()
{
	//1. �ַ�����

	//int i;
	//char c;
	////scanf("%c", &c);//����%c �� 1 �õ� %d����� 49 �� %c����� '1'��
	//scanf("%d", &i);//����%d��1 �õ� %d����� 1 �� %c����� ' '.
	//c = i;


	////char d;
	////c = 1;
	////d = '1';
	////if (c == d) {
	////	printf("���\n");
	////}
	////else {
	////	printf("�����\n");
	////}
	//printf("c=%d\n",c);
	//printf("c='%c'\n", c);


	//if (i = '1') {  //���ֱ�Ӳ���49 �Ƿ����'1'�Ļ�������ȵġ�
	//	printf("ok");
	//}
	
	//scanf("%d %c",&i,&c);
	//printf("i=%d,c=%d,i='%c'",i,c,c);


	//char i = 'z';
	//printf("%c\n",i-1);//z-1 �Ǿ��� y �ˣ��ڼ�����ڲ�����Ķ�������������
	//printf("%d\n", i);



	bool b = 6 > 5;//�ڿ�ͷ����#include<stdbool.h>�Ϳ���дbool �߼�
	bool t = true;

	t = 2;
	printf("%d",b);// printfû�� ���true ��false��ֻ�ܱ�� 1����0 
	return 0;
}