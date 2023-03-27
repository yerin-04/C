//202378076 유예린
//2023.03.27
//표준출력함수 printf() 서식 확인

#include <stdio.h>

int gibon3_5()
{
	
	printf("%d\n", 123);
	printf("%5d\n", 123);
	//%5d : 다섯자리 차지. 차지하는 공간의 오른쪽에 맞춰서 쓴다(오른쪽 붙여 쓰기).
	printf("%05d\n", 123);
	//%05d : 다섯자리 차지. 빈 공간은 0으로 채운다.


	printf("%f\n", 123.45);
	//%f : 기본적으로 소수점 6자리 표시
	printf("%7.1f\n", 123.45);
	//7자리까지 표시(소수점도 자리 차지함), 소수점 첫째자리까지 표시
	printf("%7.3f\n", 123.45);


	printf("%s\n", "Basic-C");
	printf("%10s\n", "Basic-C");
	return 0;
}

void main()
{
	gibon3_5();
}