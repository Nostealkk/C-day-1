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

	//for (i = 0;i < sizeof (ac) / sizeof (ac[0]);i++) //�����������С����������
	//{
	//	printf("%d\n", ac[i]);
	//}
	//while (*p != -1) //������ָ���������������
	//{
	//	printf("%d\n", *p++);
	//}



	//2. ��̬�ڴ����
	//ͷ�ļ����� #include<stdlib.h>

	//int number;
	//int* a;
	//int i;
	//printf("������������");
	//scanf("%d",&number);
	////int a[number]
	//a = (int*)malloc(number * sizeof(int));
	//for (i = 0;i < number;i++) {
	//	scanf("%d",&a[i]);
	//}
	//for (i = number - 1;i >= 0;i--) {
	//	printf("%d", a[i]);
	//}
	//free(a);//malloc �����ڴ�ռ�֮����Ҫ����ȥ��

	//{//��δ������뿴malloc�����˶��ٿռ䣬����û�з�Ӧ��Ӧ��������������⡣
	//	void* p;
	//	int cnt = 0;

	//	while ((p = malloc(100 * 1024 * 1024))) {
	//		cnt++;
	//	}
	//	printf("������%d 00mb�Ŀռ䡣\n", cnt);
	//	free(p);
	//}

	//3. �ַ�������

	//char* s = "Hello World!";
	//char* s2 = "Hello World!";

	////s[0] = 'B';//��Ϊ��һ��ʼ�Ѿ�������ź��ˣ�����ֻ��ֻ��������д�� 
	//printf("s=%p\n", s);
	//printf("s2=%p\n", s2);

	//printf("s[0]=%c\n",s[0]);

	//4.�ַ����������
	//char word[8];
	//char word2[8];

	//scanf("%s",word);
	//scanf("%s", word2);

	//printf("%s##%s##\n",word,word2);


	//5. �ַ�������
	//a[0]-- > char[10];
	//char a[][10] = { "hello", };

	//char* a = { "hello,world,""wasdfa fasdad""sdawdawfdawfa" };
	//printf("%p",a);
    
//	//6.�·�����
//	int i;
//	char *a=NULL;
//	//char* p = NULL;
//	printf("�����Ǽ��·ݣ�");
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
//	//ָ������
//	char* month[13] = { "0","January","February","March","April","May","June",
//		"July","August","Septemebr","October","November","December", };
//	if (i > 0 && i <13) 
//	{
//		return month[i];
//	}
//	return NULL;
//}


