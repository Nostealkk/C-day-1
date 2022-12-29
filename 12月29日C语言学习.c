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
	//存放数组
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



	//用字符串数组做月份翻译
	//int n;
	//char* i=NULL;

	//printf("想知道几月份的英文单词？");
	//scanf("%d",&n);
	//i = getmonth(n);
	//printf("%p\n", i);//00007FF6B3A59D9C,00007FF76D4B9DA4,00007FF73C689E90
	//printf("%s\n", i);
	//if (i != NULL) {
	//	printf("%s",i);
	//}
	//else {
	//	printf("输入有误，请重新输入。");
	//}



	//开头的int main函数括号里面 的  int argc,const char *argv[] 是什么？
	//int i;
	//for (i = 0;i < argc;i++) {
	//	printf("%d:%s\n",i,argv[i]);
	//}
	//argc,原来是表示可执行程序的数量;argv[] 就是收集所有可执行程序的 名称。


	//3.单字符输入输出

	//int putchar(int c);
 //   int getchar(void);

	//int ch;
	//while ((ch = getchar()) != EOF) {
	//	putchar(ch);
	//}
	//printf("EOF\n");//输入ctrl+c 就可以输出EOF 结束程序。

	
	//4.Malloc

	//int number;
	//int* a;
	//int i;
	//printf("输入数量。");
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
	//printf("输入你的年龄。");
	//scanf("%d",&age);

	//day = age * 365;
	//printf("你已经活了%d天了。\n",day);



	//jolly 和 deny 函数
	//jolly();
	//jolly();
	//jolly();
	//deny();

	//br,ic函数
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
	//printf("toes的两倍=%d\n", i);
	//printf("toes的平方=%d\n", j);

    //函数调用函数
	printf("Starting now:\n");
	one_three();
	printf("Done!");

	return 0;
}
