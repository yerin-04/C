/*202378076 ������
* 2023.03.15
* ch2 ���� �� ����(4Ģ���� �� ��� ���, ...)
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


	//�Ҽ��� ���� ���ڴ� %d
	//printf("\n"); �� ����O
	printf("\n");

	return 0;
}

void main()
{
	app0202();
}
//Ű���忡 0 1 2 3 4 ... �� �����ϱ� �����ϱ�