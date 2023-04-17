//202378076유예린
//2023.04.17
//비트 연산자

#include <stdio.h>
int ch4_rpp4()
{
	int num, result;

	printf("정수 입력:");
	scanf_s("%d", &num);

	result = num << 3 >> 2;
	printf("%d * 8 / 4 = %d\n", num, result);

	/*
	int num = 3;
	int result;

	result = num<<3;
	result = result >>2;

	printf("%d*8/4 : %d vs %d", result, num*8/4);
	//=>> 두 결과 같음.
	*/

	return 0;
}

void main()
{
	ch4_rpp4();
}