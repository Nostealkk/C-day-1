#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	//1. 求a的连续和

	//int a, n;
	//scanf("%d %d",&a,&n);
	//int sum = 0;
	//int mask = 1;
	//int t = 0;
 //   int i, b;

	//for (i = 1;i <= n;i++) {
	//	b = mask * a;
	//	t += b;
	//	mask *= 10;
	//	sum += t;
	// }

	//或者可以简化为
	//for (i = 0;i < n;i++) {
	//	t = t * 10 + a;
	//	sum += t;
	//}
	//printf("%d", sum);



	// 2. C语言有哪些基础数据类型

	//int a;
	//a = 6;
	//printf("sizeof(int)=%ld\n", sizeof(int));
	//printf("sizeof(a)=%ld\n", sizeof(a));


	//printf("sizeof(char)=%ld\n",sizeof(char));
	//printf("sizeof(short)=%ld\n", sizeof(short));
	//printf("sizeof(int)=%ld\n", sizeof(int));
	//printf("sizeof(long)=%ld\n", sizeof(long));
	//printf("sizeof(long long)=%ld\n", sizeof(long long));


	// char c = 128;
	////00000000-11111111 0~255 -128~127
	//unsigned int i =257;
	////00000000 00000000 00000000 11111111

 //   printf("c=%d,i=%d\n",c,i);
	//
	
	//int 可以表示的最大数是多少

 //   int a = 0,b=0;
	//while ( ++a > 0);//+1之后1还没有到达满值就继续+1，到达最大值之后溢出会变成0。
	//printf("int数据类型最大数是：%d\n", a - 1);
	//b++;
	//while((a/=10)!=0){//
	//	b++;
	//}
	//printf("int数据类型最大的数的数位是：%d\n",b);
	//
	//char c = -1;
	//int i = -1;
	//printf("c=%u,i=%u\n", c, i);


	//printf("%.3f\n",-0.0049);
	//printf("%.30f\n", -0.0049);//结果为 -0.004899999999999999841793218991 ，是存在误差的，不能准确的表达0.0049 。
	//printf("%.3f\n", -0.00049);

	float a, b, c;
	a = 1.345f;
	b = 1.123f;
	c = a + b;
	if (c == 2.468)
		printf("相等\n");
	else
		printf("不相等!c=%.10f,或%f\n",c,c);
	return 0;
}