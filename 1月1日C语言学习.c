#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>




struct time {
	int hour;
	int min;
	int seconds;
};

struct time timeupdate(struct time now)
{
	++now.seconds;
	if (now.seconds == 60) {
		now.seconds = 0;
		++now.min;
		if (now.min == 60) {
			now.min = 0;
			++now.hour;
			if (now.hour == 24) {
				now.hour = 0;
			}
		}
	}
	return now;
}

struct time *timeupdatep(struct time *now)
{
	++now->seconds;
	if (now->seconds == 60) {
		now->seconds = 0;
		++now->min;
		if (now->min == 60) {
			now->min = 0;
			++now->hour;
			if (now->hour == 24) {
				now->hour = 0;
			}
		}
	}
	return now;
}









struct point {
	int x;
	int y;
};

struct rectangle {
	struct point p1;
	struct point p2;
};

void printrectangle(struct rectangle p)
{
	printf("<%d,%d>to<%d,%d>\n",p.p1.x,p.p1.y,p.p2.x,p.p2.y);
}

typedef union {
	int i;
	char ch[sizeof(int)];

}CHI;

int gall=1 ;

int f(void)//ȫ�ֱ���
{
	printf("in %s gall=%d\n", __func__,gall);
	gall += 2;
	printf("again in %s gall=%d\n", __func__, gall);
	return gall;
}

int ff(void)//��̬���ر���
{
	int k = 0;
	static int all = 2;
	printf("&gall=%p\n",&gall);//��̬���ر������ǹ��ű��ر�����ͷ��ȫ�ֱ�����
	printf("&all=%p\n", &all);
	printf("&k=%p\n", &k);


	//printf("in %s all=%d\n", __func__, all);
	//all += 2;
	//printf("again in %s all=%d\n", __func__, all);
	//return all;
}


int main(int argc, char const* argv[])
{
	//�ṹ�еĽṹ
	int i;
	struct time testtime [5] = {{11,59,59},{12,0,0},{1,29,59},{23,59,59},{19,12,27}};
	
	
	struct time* time1 = &testtime;//��ָ��ķ�ʽ���㡣
    for (i = 0;i < 5;++i) 
	{
		printf("time is %.2i:%.2i:%.2i\n",
			time1->hour, time1->min, time1->seconds);

		time1 = timeupdatep(time1);

        printf("...one second late it's %.2i:%.2i:%.2i\n",
			time1->hour, time1->min, time1->seconds);
		time1++;
	}



	//for (i = 0;i < 5;++i) //����������ȥ����
	//{
	//	printf("time is %.2i:%.2i:%.2i\n",
	//		testtime[i].hour, testtime[i].min, testtime[i].seconds);

	//	testtime[i] = timeupdate(testtime[i]);


	//	printf("...one second late it's %.2i:%.2i:%.2i\n",
	//		testtime[i].hour, testtime[i].min, testtime[i].seconds);

	//}


 	//�ṹ�еĽṹ�е�����
	//int i;
	//struct rectangle recet[] = { 
	//	{{1,2},{3,4}},
	//	{{5,6},{7,8}} 
	//}; //����ǰ�rectangle�ṹ������� �� 0 ���͵�1 ����  p1��x��y��p2��x��y����д������ 
	//for (i = 0;i < 2;i++) 
	//{ printrectangle(recet[i]); }


	////�Զ�����������
	//typedef int leng;
 //   leng i = 1;//leng �������int �������ͣ�leng����int
	//typedef struct adate {
	//	int day;
	//	int month;
	//	int year;
	//}date;

	//date d = {1,1,1};// date�Ժ�ʹ�����struct adate



	//union���ô�
	//CHI chi;
	//int i;
	//chi.i = 1234;
	//for (i = 0;i < sizeof(int);i++) {
	//	printf("%02hhX",chi.ch[i]);
	//}
	//printf("\n");



	//ȫ�ֱ���
	//printf("in %s gall=%d\n", __func__, gall);
 //   f();
	//printf("again in %s gall=%d\n", __func__, gall);


	//��̬���ر���

	//ff();
	////ff();
	//ff();





	return 0;
}


