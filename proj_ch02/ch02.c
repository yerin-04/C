//202378076 À¯¿¹¸°
//2023.03.20
//ch02 ex.


#include <stdio.h>

int app0202()
{
	int a = 200;
	int b = 50;
	int result=0;

	printf("%d + %d = %d\n", a, b, result);
}

int main()
{
	//app0202();
	float a = 0.01;
	float result = 0.0;
	for (int i = 0; i < 100; i++)
		result = result + a;

	printf("%f", result);
	return 0;
}