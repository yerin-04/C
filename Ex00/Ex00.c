#include <stdio.h>

int ex0()
{
	int a, b, c;

	printf("���� ���� (+ �Ǵ� *) => + \n");
	printf("ù ��° �� => ");
	scanf_s("%d", &a);

	printf("�� ��° �� => ");
	scanf_s("%d", &b);

	printf("�� ��° �� => ");
	scanf_s("%d", &c);

	printf("%d + %d + %d = %d", a, b, c, a + b + c);


	

	return 0;
}

int main()
{
	ex0();
	return 0;
}