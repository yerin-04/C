//202378076 유예린
//2023.04.01
//[필수]예제모음06

#include<stdio.h>

int pjt03()
{
	printf("int 형의 크기\t\t\t ==> %d\n", sizeof(int));
	printf("unsigned int 형의 크기\t\t ==> %d\n", sizeof(unsigned int));
	printf("short 형의 크기\t\t\t ==> %d\n", sizeof(short));
	printf("unsigned short 형의 크기\t ==> %d\n", sizeof(unsigned short));
	printf("long int 형의 크기\t\t ==> %d\n", sizeof(long int));
	printf("unsigned long int 형의 크기\t ==> %d\n", sizeof(unsigned long int));
	printf("float 형의 크기\t\t\t ==> %d\n", sizeof(float));
	printf("double 형의 크기\t\t ==> %d\n", sizeof(double));
	printf("long double 형의 크기\t\t ==> %d\n", sizeof(long double));
	printf("char 형의 크기\t\t\t ==> %d\n", sizeof(char));
	printf("unsigned char 형의 크기\t\t ==> %d\n", sizeof(unsigned char));

	return 0;
}

int main()
{
	pjt03();
	return 0;
}