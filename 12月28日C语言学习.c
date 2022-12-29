//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//char *pickmonth(int i);
//int main()
//{
	//char ac[] = { 0,1,2,3,4,5,6,7,8,9, -1};
	//char* p = &ac[0];
	//int i; 

	//for (i = 0;i < sizeof (ac) / sizeof (ac[0]);i++) //这是求数组大小来遍历数组
	//{
	//	printf("%d\n", ac[i]);
	//}
	//while (*p != -1) //这是用指针计算来遍历数组
	//{
	//	printf("%d\n", *p++);
	//}



	//2. 动态内存分配
	//头文件包含 #include<stdlib.h>

	//int number;
	//int* a;
	//int i;
	//printf("请输入数量：");
	//scanf("%d",&number);
	////int a[number]
	//a = (int*)malloc(number * sizeof(int));
	//for (i = 0;i < number;i++) {
	//	scanf("%d",&a[i]);
	//}
	//for (i = number - 1;i >= 0;i--) {
	//	printf("%d", a[i]);
	//}
	//free(a);//malloc 借了内存空间之后需要还回去。

	//{//这段代码是想看malloc借来了多少空间，但是没有反应，应该是哪里出了问题。
	//	void* p;
	//	int cnt = 0;

	//	while ((p = malloc(100 * 1024 * 1024))) {
	//		cnt++;
	//	}
	//	printf("分配了%d 00mb的空间。\n", cnt);
	//	free(p);
	//}

	//3. 字符串变量

	//char* s = "Hello World!";
	//char* s2 = "Hello World!";

	////s[0] = 'B';//因为量一开始已经被定义放好了，后面只能只读，不能写。 
	//printf("s=%p\n", s);
	//printf("s2=%p\n", s2);

	//printf("s[0]=%c\n",s[0]);

	//4.字符串输入输出
	//char word[8];
	//char word2[8];

	//scanf("%s",word);
	//scanf("%s", word2);

	//printf("%s##%s##\n",word,word2);


	//5. 字符串数组
	//a[0]-- > char[10];
	//char a[][10] = { "hello", };

	//char* a = { "hello,world,""wasdfa fasdad""sdawdawfdawfa" };
	//printf("%p",a);
    
//	//6.月份数组
//	int i;
//	char *a=NULL;
//	//char* p = NULL;
//	printf("现在是几月份？");
//	scanf("%d",&i);
//	a = pickmonth(i);
//	printf("%p\n", a);//00007FF78D829CA0
//	printf("%s\n", a);
//	printf("%zd\n",sizeof(a));
//
//	if (a == NULL) {
//		printf("wrong input\n");
//	}
//	else {
//		printf("%s\n",a);
//	}
//	
//	return 0;
//}
//
//char *pickmonth(int i)
//{
//	//指针数组
//	char* month[13] = { "0","January","February","March","April","May","June",
//		"July","August","Septemebr","October","November","December", };
//	if (i > 0 && i <13) 
//	{
//		return month[i];
//	}
//	return NULL;
//}


