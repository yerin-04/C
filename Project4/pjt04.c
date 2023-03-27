//202378076 유예린
//2023.03.22
//
#define _CRT_SECURE_NO_WARNINGS
#include < stdio.h>

int lab01()
{
	int a = 0, b = 0, c = 0, d = 0;
	int result = 0;

	printf("첫 번째 계산할 값을 입력하세요 ==>");
	scanf_s("%d", &a);
	printf("두 번째 계산할 값을 입력하세요 ==>");
	scanf_s("%d", &b);
	printf("세 번째 계산할 값을 입력하세요 ==>");
	scanf_s("%d", &c);
	printf("네 번째 계산할 값을 입력하세요 ==>");
	scanf_s("%d", &d);

	result = a + b + c + d;

	printf("%d + %d + %d + %d = %d\n", a, b, c, d, result);

	return 0;

}

void main()
{
	lab01();
}