#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//int mycmp(const char* s1, const char* s2)
//{
//	//����1��
//	//int idx = 0;//�������ַ��������飬����һ������������Ϊ���ǵ��±꣬ȥ�����ַ�����return s1[idx]-s2[idx]
//	//while (s1[idx] == s2[idx] && s1[idx] != '\0') {
//	//	idx++;
//	//}
//	//����2��ʹ��ָ�����  return *s1-*s2
//	//while (*s1 == *s2 && *s1 != '\0') {
//	//	s1++;
//	//	s2++;
//	//}
//    //����3��ָ����������ַ���ӣ�����������Ͳ�ֵ
//	int sum1 = 0;
//	int sum2 = 0;
//	while(*s1 != '\0') {
//		sum1 += *s1;
//		s1++;
//	}
//	while(*s2 != '\0') {
//		sum2 += *s2;
//		s2++;
//	}
//
//	return sum1-sum2;
//}

//ģ��strcpy
//char* mycpy(char* dst, const char* src)
//{
	//����汾
	//int idx = 0;
	//while(src[idx]!='\0') {
	//	dst[idx] = src[idx];
	//	idx++;
	//}
	//dst[idx] = '\0';

	//ָ��汾
//	char* ret = dst;
//	while (*src != '\0') {//����Ҳ������ *src
//		*dst++ = *src++;
//	}
//	�������Կ�ѭ���������Ͳ���*dst='\0'
//	while (*dst++ = *src++)
//		;
//	*dst = '\0';
//	return ret;
//}


enum color{red,blue,yellow};

void f(enum color c)
{
	printf("%d",c);
}

struct date {
	int year;
	int month;
	int day;
};

void printfday(struct date* d1) {
	//printf("Day=%d ", d1->day);
	//printf("Month=%d ", d1->month);
	//printf("Year=%d ", d1->year);

	printf("����������ǣ�%d-%d-%d��", d1->day, d1->month, d1->year);
}

int main(int argc, char const* argv[])
{
	//�ַ������� strcmp
	//int strcmp(const char* s1, const char* s2);
	//�Ƚ������ַ��Ĵ�С��  0= s1=s2.  1=s1>s2   -1=s2>s1

	//char a1[]="abc ";
	//char a2[]="abc111";
	//printf("%d\n", mycmp(a1, a2));

	//printf("%d\n", a1);
	//printf("%d\n", a2);




	//�ַ������� strcpy
	//char *src=0;
	//char* dst = (char*)malloc(strlen(src) + 1);
	//strcpy(dst, src);

	//��������Լ���ģ��strcpy��ô���أ�
	//char a1[] = "";
	//char a2[] = "weilin zhu";
	//mycpy(a1, a2);
	//printf("a1=%s", a1);
	//printf("a2=%s", a2);


	//strchr �� strrchr

	//char s[] = "hello";
	//char* p = strchr(s, 'l');
	////char c = *p;
	////*p = '\0';
	//char* t = (char*)malloc(strlen(s) + 1);
	//strcpy(t, p);//���ַ�ǰ�沿�־Ͱ�*p����\0Ȼ�������s��ֵ��t��
	//printf("%s",t);
	//free(t);


	//ö��
	//
	//printf("%d\n",red);
	//printf("%d\n", blue);
	//printf("%d\n", yellow);

	//enum color t = red;//���Ƕ���int t=0
	//printf("%d\n", t);
	//scanf("%d",&t);
	//f(t);

	
	
	//�ṹ����
	

	struct date today;//��today����� date �Ľṹ������
	today ={2022, 07, 31 };
	//struct date day;
	//day = today;
	//today.month = 07;
	//today.day = 21;
	//today.year = 2022;

	//printf("Today's day is %i-%i-%i.\n", //�����ǵ������ر���ֱ�����
	//today.day, today.month, today.year);

	//printfday(&today);//�������趨��������ȡ�ṹ������ַ����������
	
	struct date* p = &today;//�������һ���±�����ַ=today�ĵ�ַ
	printfday(p); //��ô���p���ǵ�ַ���ü�*��

	return 0;
}