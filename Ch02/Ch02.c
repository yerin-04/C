/*202378076 유예린
* 2023.03.15
* ch2 예제 및 응용(4칙연산 및 결과 출력, ...)
*/

#include <stdio.h>

int app0202()
{
	
	int a = 100;
	int b = 50;
	int result;

	result = a + b;
	printf("result of computing: %d + %d = %d\n",a, b, result);

	result = a - b;
	printf("result of computing: %d - %d = %d\n", a, b, result);

	result = a * b;
	printf("result of computing: %d * %d = %d\n", a, b, result);

	result = a / b;
	printf("result of computing: %d / %d = %d\n", a, b, result);


	//소수점 없는 숫자는 %d
	//printf("\n"); 로 개행O
	printf("\n");

	return 0;
}

void main()
{
	app0202();
}
//키보드에 0 1 2 3 4 ... 은 숫자일까 문자일까