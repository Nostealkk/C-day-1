#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>








int main(int argc, char const* argv[])
{
    //格式化输入输出

	//printf("%9d\n",123);//算上123 一共9位字符，从123左侧开始填充
	//printf("%-9d\n", 123);//算上123，一共9位字符，从123右侧开始
	//printf("%+9d\n", 123);//强制加+号
	//printf("%09d\n", 123);//用0填充前面的空位

	//printf("%9.2f\n", 123.0);//整个输出占据9个字符，.2是小数点要算后两位。

	//int a = 9;
	//printf("%*d\n",a,123);//与%9d的输出是一样的，只不过把数字变成了星号，这样在后面还可以设置变量


	//printf("%hhd\n",12345);//hh输出字符串


	//int num;
	////scanf("%i",&num);//%i是根据输入的8进制，10进制和16进制的区别自动识别
	////printf("%d",num);

	//int i1 = scanf("%i",&num);
	//int i2 = printf("%d\n", num);
	//printf("%d:%d\n",i1,i2);//结果是1:5，从输入的时候接收到了1个1234数字，然后输出了1234\n ，这就是printf 和scanf 的返回值



    //文件输入输出

	FILE* fp = fopen("change.c", "r+");
	if (fp) {
		int num;
		fscanf(fp, "%d", &num);
		printf("%d\n", num);
		fclose(fp);
	}
	else {
		printf("无法打开文件。");
	}

	return 0;
}