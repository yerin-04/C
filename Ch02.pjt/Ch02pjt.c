#include <stdio.h>

int app0202()
{
	printf(" %.1f\n", 2.134);
	//%f : 실수형 출력
	//% 와 f 사이에 .2 입력한 %.2f 는 소수점 아래 둘째자리까지 출력하라는 뜻

	float a = 0.01;
	float result;
	result = a + a;
	printf("%f + %f = %f\n", a, a, result);

	double b = 0.12;
	double c = 0.2;
	//!!위에서 result 지정했음 또 할 필요X
	result = b * c;
	printf("%lf * %lf = %lf", b, c, result);
	//실수 자료형 : float(4바이트), double(8바이트)
	//보통 float자료형은 %f, double자료형은 %lf를 사용


	return 0;
}

void main()
{
	app0202();
}