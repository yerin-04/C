//202378076������
//2023.04.17
//��Ʈ ������

#include <stdio.h>
int ch4_rpp4()
{
	int num, result;

	printf("���� �Է�:");
	scanf_s("%d", &num);

	result = num << 3 >> 2;
	printf("%d * 8 / 4 = %d\n", num, result);

	/*
	int num = 3;
	int result;

	result = num<<3;
	result = result >>2;

	printf("%d*8/4 : %d vs %d", result, num*8/4);
	//=>> �� ��� ����.
	*/

	return 0;
}

void main()
{
	ch4_rpp4();
}