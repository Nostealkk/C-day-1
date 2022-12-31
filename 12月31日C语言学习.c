#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define bool int;
#define true 1;
#define false 0;

struct date {
	int day;
	int month;
	int year;
};

int numberofdays(struct date d)
{
	int days;
	const int dday[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if (d.month == 2 && isleap(d)) {
		days=29;
	}
	else {
		days=dday[d.month-1];
	}
	return days;
}


bool isleap(struct date d)
{
    bool int leap = false;
	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
		leap = true;
	}
	return leap;
}

struct point {
	int x;
	int y;
};

void getstruct(struct point p)//���һ���ṹ����������û�з���ֵ��
{
	scanf("%d",&p.x);
	scanf("%d", &p.y);
	printf("%d, %d\n",p.x,p.y);
}

void output(struct point p)
{
	printf("%d, %d",p.x,p.y);
}

struct point getstruct1(void)//�����ﲻ��ȡ�ṹ������ֱ������һ�����ؽṹ�����������������Ȼ�󷵻�һ���ṹ������
{
	struct point p;
	scanf("%d", &p.x);
	scanf("%d", &p.y);
	printf("%d, %d\n", p.x, p.y);
	return p;
}

struct point* getstructp(struct point* p)
{
	scanf("%d", &p->x);
	scanf("%d", &p->y);
	printf("%d, %d\n", p->x, p->y);
	return p;

}
void print(const struct point* p)
{
	printf("%d, %d\n",p->x,p->y);
}


//int main(int argc, char const* argv[])
//{

	//int c;
	//while ((c = getchar()) != EOF) {
	//	putchar(c);
	//}
	//int i;
	//for (i = 0;i < argc;i++) {
	//	printf("%d:%s", argc, argv[i]);
	//}


	//�ṹ����
    //���������

	//struct date today, tomorrow;

	//printf("������ҽ���������գ�");
	//scanf("%d %d %d",&today.year,&today.month,&today.day);

	//if (today.day > 31 || today.month > 12 || today.year>999999) { //�������һ�������������û����������º��գ��꣬
	//	printf("�������ʱ�䣬�����ԡ�");
	//}
	//else {
	//	if (today.day != numberofdays(today)) {
	//		tomorrow.day = today.day + 1;
	//		tomorrow.month = today.month;
	//		tomorrow.year = today.year;
	//	}
	//	else if (today.month == 12) {
	//		tomorrow.day = 1;
	//		tomorrow.month = 1;
	//		tomorrow.year = today.year + 1;
	//	}
	//	else {
	//		tomorrow.day = 1;
	//		tomorrow.month = today.month + 1;
	//		tomorrow.year = today.year;

	//	}
	//	printf("����������ǣ�%i��-%i��-%i�� ��\n",
	//		tomorrow.year, tomorrow.month, tomorrow.day);
	//}
	//

	// ���뺯��

	//struct point y = { 0,0 };
	//getstruct(y);
	//output(y);//������������ֵ����0,0. 


	//struct point x;//�����õĽṹ�������ڣ�����getstruct1 ����֮��ķ��ص�ֵ��
	//x = getstruct1();
	//output(x);


	//����ָ��ķ�ʽ
//	struct point p = { 0,0 };//������ÿ�ε��ö���Ҫ��������߼���һ��ġ���������з�ʽ���������С�
//	getstructp(&p);
//	output(p);
//	output(*getstructp(&p));
//	print(getstructp(&p));
//	
//	*getstructp(&p) = (struct point){ 1,2 };//���꺯��֮��ͱ���ֵ1.2 Ҳ�ǿ��Ե�
//	//print(&p);
//	output(p);
//
//
//	getstructp(&p)->x = 0;//���꺯��֮��ָ�븳ֵx=0 Ҳ�ǿ��Եġ�
//	output(p);
//	return 0;
//}