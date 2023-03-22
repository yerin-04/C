#define _CRT_SECURE_NO_WARNINGS
//scanf() 함수 대신 scanf_s()함수를 사용하거나 scanf()함수가 사용되는 소스의 1행에는 #define _CRT_SECURE_NO_WARNINGS라는 코드 추가
#include <stdio.h>

int app0202()
{
	int a, b;
	int result;

	//문자 앞 & : 주소 연산자
	scanf("%d", &a);
	scanf("%d", &b);

	result = a + b;
	printf("%d + %d = %d\n", a, b, result);

	return 0;
}

void main()
{
	app0202();
}