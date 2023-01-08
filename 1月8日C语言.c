#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getrand()
{
	int a;
	srand((unsigned)time(NULL));
	a = rand() % 100;
	return a;
}

int guess(int a)
{
	int i = 0;
	while (i != a) {
		scanf("%d", &i);
		if (i > a) {
			printf("%d is bigger than this number.Try another one.\n", i);
		}
		else if (i < a) {
			printf("%d is smaller than this number.Try another one.\n", i);
		}
		else if (i == a) {
			printf("GOOD, you get it right!\n");
		}
	}
}

int main(int argc, char const* argv[])
{
	int a;
	printf("Guess what number it is?\n");
	a = getrand();
	guess(a);
	//printf("%d",a);

	return 0;
}