//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//
//#include <stdio.h>
//
//struct U0
//{
//	unsigned int leading : 3;
//	unsigned int flag1 : 1;
//	unsigned int flag2 : 1;
//	int trailing : 27;
//};
//
//void prtbin(unsigned int number)
//{
//	unsigned mask = 1u << 31;
//	for (;mask;mask >>= 1) {
//		printf("%d",number&mask?1:0);
//	}
//	printf("\n");
//}
//
//
//int main(int argc, const char* argv[])
//{
//	//printf("%s",*argv);
//
//
//	//位运算例子
//
//	//int number;
//	////scanf("%d",&number);
//	//number = 0x55555555;
//	//unsigned mask = 1u << 31;
//	//for (;mask;mask >>= 1) {
//	//	printf("%d", number & mask ? 1:0);
//	//}
//	//printf("\n");
//
//
//	//位段
//	struct U0 uu;
//	uu.leading = 2;
//	uu.flag1 = 0;
//	uu.flag2 = 1;
//	uu.trailing = 0;
//
//	printf("sizeof(uu)=%lu\n",sizeof(uu));
//	prtbin(*(int*)&uu);
//
//
//
//
//	//可变数组
//
//	//array.c, array.h
// 
// 
// 
//
//
//	return 0;
//}