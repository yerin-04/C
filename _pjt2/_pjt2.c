#define _CRT_SECURE_NO_WARNINGS
//scanf() �Լ� ��� scanf_s()�Լ��� ����ϰų� scanf()�Լ��� ���Ǵ� �ҽ��� 1�࿡�� #define _CRT_SECURE_NO_WARNINGS��� �ڵ� �߰�
#include <stdio.h>

int app0202()
{
	int a, b;
	int result;

	//���� �� & : �ּ� ������
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