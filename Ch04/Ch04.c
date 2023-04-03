//202378076 유예린
//2023.04.03
//Ch04 C연산자의 이해

#include <stdio.h>

int ch04()
{
	int a = 100, b = 200;
	float result;

	result = a / b;

	printf("%f\n", result);
	//정수형끼리의 계산 결과는 정수형
	return 0;
}

void main()
{
	ch04();
}