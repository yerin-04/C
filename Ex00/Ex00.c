#include <stdio.h>

int ex0()
{
	int a, b, c;

	printf("연산 선택 (+ 또는 *) => + \n");
	printf("첫 번째 값 => ");
	scanf_s("%d", &a);

	printf("두 번째 값 => ");
	scanf_s("%d", &b);

	printf("세 번째 값 => ");
	scanf_s("%d", &c);

	printf("%d + %d + %d = %d", a, b, c, a + b + c);


	

	return 0;
}

int main()
{
	ex0();
	return 0;
}