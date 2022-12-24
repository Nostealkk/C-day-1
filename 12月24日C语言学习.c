#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdbool.h>
int main()
{
	//1. 字符类型

	//int i;
	//char c;
	////scanf("%c", &c);//输入%c 的 1 得到 %d的输出 49 和 %c的输出 '1'。
	//scanf("%d", &i);//输入%d的1 得到 %d的输出 1 和 %c的输出 ' '.
	//c = i;


	////char d;
	////c = 1;
	////d = '1';
	////if (c == d) {
	////	printf("相等\n");
	////}
	////else {
	////	printf("不相等\n");
	////}
	//printf("c=%d\n",c);
	//printf("c='%c'\n", c);


	//if (i = '1') {  //如果直接测算49 是否等于'1'的话，是相等的。
	//	printf("ok");
	//}
	
	//scanf("%d %c",&i,&c);
	//printf("i=%d,c=%d,i='%c'",i,c,c);


	//char i = 'z';
	//printf("%c\n",i-1);//z-1 那就是 y 了，在计算机内部计算的都二进制数字嘛
	//printf("%d\n", i);



	bool b = 6 > 5;//在开头加上#include<stdbool.h>就可以写bool 逻辑
	bool t = true;

	t = 2;
	printf("%d",b);// printf没法 表达true 和false，只能表达 1或者0 
	return 0;
}