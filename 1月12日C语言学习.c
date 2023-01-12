#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//#include <stdbool.h>
//#include "student.h"

//void read(FILE* fp, int index);

int main(int argc, char const* argv[])
{
	//二进制文件
	//FILE* fp = fopen("C:\\Users\\ROG\\source\\repos\\change\\student.h", "w");
	//if (fp) {
	//	fseek(fp, 0L, SEEK_END);
	//	long size = ftell(fp);

	//}



	//移位运算左移
	//unsigned char c = 0xa5;
	//printf("   c=%hhx\n",c);
	//printf("c<<2=%x\n", c<<2);

    //移位运算右移
	int a = 0x80000000;//4字节的整数能表达的最大的负数
	unsigned int b = 0x80000000;
	printf("%d\n",a);
	printf("%u\n",b);

	printf("%d\n", a>>1);
	printf("%u\n", b>>1);
	return 0;
}