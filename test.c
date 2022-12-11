#define _CRT_SECURE_NO_WARNINGS 1
//放在代码的第一行
int g_val = 2022;

#include <stdio.h>


// integer 是整数的意思
// 1. 写出主函数
//100-500 行代码
//如何执行呢？-C语言是从主函数的第一行开始执行的
//所以C语言代码中得有main函数-入口
//


//写个代码，在屏幕上打印：比特
//printf-库函数-在屏幕上打印信息
//printf 的使用，也的要打招呼（引用头文件 stdio.h）

//


//int main()
//{
//	printf("威霖\n");
//	printf("欢迎你世界\n");
//
//	return 0;
//
//}


//编译+链接+加运行代码
//快捷键是 ctrl+ F5

//程序执行的太快，没有看到，
//为了看到结果，设置一下vs2022的属性
//


//int main()
//{
//	//字符类型
//	char chr = 'a';
//	//整型
//	int age = 20;
//	//短整型
//	short num = 10;
//	//long
//	//long long
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.55;
//
//
//	return 0;
//}








//int main()
//{
//	printf("威霖\n");
//	printf("今年\n");
//	printf("%d\n", 26);//%d打印一个整数
//	printf("岁\n");
//// sizeof 是一个关键字——操作符——计算类型或者变量所占空间的大小
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}

//
//int main()
//{
//	//创建的一个变量
//	//类型    变量的名字    = 是赋值；
//	//类型     变量的名字；//不推荐
//	int	age = 20;
//	double weight = 75.3;
//	
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//
//}



//全局变量  {}  外部定义的变量
//int a = 100;
//
//int main()
//{
//	//局部变量  {}  内部定义的变量
//	//当局部变量和全局变量名字冲突的情况下，局部优先
//	//不建议把全局变量和全局变量的名字写成一样的
//	int a = 10;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum=%d\n", sum);
//	
//	return 0;
//}




