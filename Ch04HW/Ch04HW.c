//202378076������
//2023.04.05
//HW01-4�� ������

#include <stdio.h>

int hw03()
{
	float a, b,result;
	//�Ǽ��� ���� a, b, result�� ����Ѵ�.

	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%f", &a);
	//%���� a�� �� ���� Ű����� ���� �Է��Ѵ�.
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%f", &b);
	//���� b�� �� ���� Ű����� ���� �Է��Ѵ�.

	result = a + b;
	printf("%5.2f + %5.2f = %5.2f\n", a, b,result);
	//5�ڸ� ǥ��, �Ҽ��� ��°�ڸ����� ǥ��. �Ҽ����� �ڸ� ������.

	result = a - b;
	printf("%5.2f - %5.2f = %5.2f\n", a, b, result);

	result = a / b;
	printf("%5.2f / %5.2f = %5.2f\n", a, b, result);

	result = a * b;
	printf("%5.2f * %5.2f = %5.2f\n", a, b, result);

	result = (int)a % (int)b;
	printf("%d %% %d = %d\n", (int)a, (int)b, (int)result);
	//������ ������ ���� �Ǽ��� ������ ���� �� ��ȯ�Ѵ�.

	return 0;
}

void main()
{
	hw03();

}