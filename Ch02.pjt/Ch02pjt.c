#include <stdio.h>

int app0202()
{
	printf(" %.1f\n", 2.134);
	//%f : �Ǽ��� ���
	//% �� f ���̿� .2 �Է��� %.2f �� �Ҽ��� �Ʒ� ��°�ڸ����� ����϶�� ��

	float a = 0.01;
	float result;
	result = a + a;
	printf("%f + %f = %f\n", a, a, result);

	double b = 0.12;
	double c = 0.2;
	//!!������ result �������� �� �� �ʿ�X
	result = b * c;
	printf("%lf * %lf = %lf", b, c, result);
	//�Ǽ� �ڷ��� : float(4����Ʈ), double(8����Ʈ)
	//���� float�ڷ����� %f, double�ڷ����� %lf�� ���


	return 0;
}

void main()
{
	app0202();
}