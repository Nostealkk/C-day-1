#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//int mycmp(const char* s1, const char* s2)
//{
//	//方法1：
//	//int idx = 0;//把两个字符串当数组，设置一个整数变量作为他们的下标，去遍历字符串。return s1[idx]-s2[idx]
//	//while (s1[idx] == s2[idx] && s1[idx] != '\0') {
//	//	idx++;
//	//}
//	//方法2：使用指针计算  return *s1-*s2
//	//while (*s1 == *s2 && *s1 != '\0') {
//	//	s1++;
//	//	s2++;
//	//}
//    //方法3：指针遍历所有字符相加，求得整数类型差值
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

//模拟strcpy
//char* mycpy(char* dst, const char* src)
//{
	//数组版本
	//int idx = 0;
	//while(src[idx]!='\0') {
	//	dst[idx] = src[idx];
	//	idx++;
	//}
	//dst[idx] = '\0';

	//指针版本
//	char* ret = dst;
//	while (*src != '\0') {//条件也可以是 *src
//		*dst++ = *src++;
//	}
//	甚至可以空循环，这样就不用*dst='\0'
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

	printf("今天的日期是：%d-%d-%d。", d1->day, d1->month, d1->year);
}

int main(int argc, char const* argv[])
{
	//字符串函数 strcmp
	//int strcmp(const char* s1, const char* s2);
	//比较两个字符的大小。  0= s1=s2.  1=s1>s2   -1=s2>s1

	//char a1[]="abc ";
	//char a2[]="abc111";
	//printf("%d\n", mycmp(a1, a2));

	//printf("%d\n", a1);
	//printf("%d\n", a2);




	//字符串函数 strcpy
	//char *src=0;
	//char* dst = (char*)malloc(strlen(src) + 1);
	//strcpy(dst, src);

	//如果我们自己想模拟strcpy怎么做呢？
	//char a1[] = "";
	//char a2[] = "weilin zhu";
	//mycpy(a1, a2);
	//printf("a1=%s", a1);
	//printf("a2=%s", a2);


	//strchr 和 strrchr

	//char s[] = "hello";
	//char* p = strchr(s, 'l');
	////char c = *p;
	////*p = '\0';
	//char* t = (char*)malloc(strlen(s) + 1);
	//strcpy(t, p);//求字符前面部分就把*p换成\0然后这里把s的值给t。
	//printf("%s",t);
	//free(t);


	//枚举
	//
	//printf("%d\n",red);
	//printf("%d\n", blue);
	//printf("%d\n", yellow);

	//enum color t = red;//就是定义int t=0
	//printf("%d\n", t);
	//scanf("%d",&t);
	//f(t);

	
	
	//结构类型
	

	struct date today;//把today定义成 date 的结构变量。
	today ={2022, 07, 31 };
	//struct date day;
	//day = today;
	//today.month = 07;
	//today.day = 21;
	//today.year = 2022;

	//printf("Today's day is %i-%i-%i.\n", //这里是当做本地变量直接输出
	//today.day, today.month, today.year);

	//printfday(&today);//这里是设定函数来获取结构变量地址来输出结果。
	
	struct date* p = &today;//如果设置一个新变量地址=today的地址
	printfday(p); //那么这个p就是地址不用加*号

	return 0;
}