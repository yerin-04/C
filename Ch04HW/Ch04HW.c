//202378076유예린
//2023.04.05
//HW01-4장 연산자

#include <stdio.h>

int hw03()
{
	float a, b,result;
	//실수형 변수 a, b, result를 사용한다.

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%f", &a);
	//%f : , 변수 a에 들어갈 값을 키보드로 직접 입력한다.
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%f", &b);
	//%f : , 변수 b에 들어갈 값을 키보드로 직접 입력한다.

	result = a + b;
	printf("%5.2f + %5.2f = %5.2f\n", a, b,result);
	//5자리 표시, 소수점 둘째자리까지 표시. 소수점도 자리 차지함.

	result = a - b;
	printf("%5.2f - %5.2f = %5.2f\n", a, b, result);

	result = a / b;
	printf("%5.2f / %5.2f = %5.2f\n", a, b, result);

	result = a * b;
	printf("%5.2f * %5.2f = %5.2f\n", a, b, result);

	result = (int)a % (int)b;
	printf("%d %% %d = %d\n", (int)a, (int)b, (int)result);
	//2자리 표시, 소수점 뒤에 표시X
	return 0;
}

void main()
{
	hw03();

}