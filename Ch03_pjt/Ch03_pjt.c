//202378076 ������
//2023.04.01
//[�ʼ�]��������06

#include<stdio.h>

int pjt03()
{
	printf("int ���� ũ��\t\t\t ==> %d\n", sizeof(int));
	printf("unsigned int ���� ũ��\t\t ==> %d\n", sizeof(unsigned int));
	printf("short ���� ũ��\t\t\t ==> %d\n", sizeof(short));
	printf("unsigned short ���� ũ��\t ==> %d\n", sizeof(unsigned short));
	printf("long int ���� ũ��\t\t ==> %d\n", sizeof(long int));
	printf("unsigned long int ���� ũ��\t ==> %d\n", sizeof(unsigned long int));
	printf("float ���� ũ��\t\t\t ==> %d\n", sizeof(float));
	printf("double ���� ũ��\t\t ==> %d\n", sizeof(double));
	printf("long double ���� ũ��\t\t ==> %d\n", sizeof(long double));
	printf("char ���� ũ��\t\t\t ==> %d\n", sizeof(char));
	printf("unsigned char ���� ũ��\t\t ==> %d\n", sizeof(unsigned char));

	return 0;
}

int main()
{
	pjt03();
	return 0;
}