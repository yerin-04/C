//202378076 À¯¿¹¸°
//2023.03.22
//ch02 ex.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int app0202()
{
	int a, b;
	int result;

	scanf("%d", &a);
	scanf("%d", &b);

	result = a + b;
	printf("%d + %d = %d\n", a, b, result);

	result = a - b;
	printf("%d - %d = %d\n", a, b, result);

	result = a * b;
	printf("%d * %d = %d\n", a, b, result);

	result = a / b;
	printf("%d / %d = %d\n", a, b, result);

	return 0;
}

int main()
{
	app0202();

}