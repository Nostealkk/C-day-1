#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>








int main(int argc, char const* argv[])
{
    //��ʽ���������

	//printf("%9d\n",123);//����123 һ��9λ�ַ�����123��࿪ʼ���
	//printf("%-9d\n", 123);//����123��һ��9λ�ַ�����123�Ҳ࿪ʼ
	//printf("%+9d\n", 123);//ǿ�Ƽ�+��
	//printf("%09d\n", 123);//��0���ǰ��Ŀ�λ

	//printf("%9.2f\n", 123.0);//�������ռ��9���ַ���.2��С����Ҫ�����λ��

	//int a = 9;
	//printf("%*d\n",a,123);//��%9d�������һ���ģ�ֻ���������ֱ�����Ǻţ������ں��滹�������ñ���


	//printf("%hhd\n",12345);//hh����ַ���


	//int num;
	////scanf("%i",&num);//%i�Ǹ��������8���ƣ�10���ƺ�16���Ƶ������Զ�ʶ��
	////printf("%d",num);

	//int i1 = scanf("%i",&num);
	//int i2 = printf("%d\n", num);
	//printf("%d:%d\n",i1,i2);//�����1:5���������ʱ����յ���1��1234���֣�Ȼ�������1234\n �������printf ��scanf �ķ���ֵ



    //�ļ��������

	FILE* fp = fopen("change.c", "r+");
	if (fp) {
		int num;
		fscanf(fp, "%d", &num);
		printf("%d\n", num);
		fclose(fp);
	}
	else {
		printf("�޷����ļ���");
	}

	return 0;
}