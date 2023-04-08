//202378076유예린
//2023.04.08
//예제모음10

#include <stdio.h>

int hw05()
{
	int year;

	printf("연도를 입력하세요. : ");
	scanf_s("d", &year);
	//계산할 연도를 입력한다.

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		//윤년은 입력한 연도가 4로 나누어 떨어지고 100으로는 나누어 떨어지지 않아야 한다. 또는 400으로 나누어 떨어져도 된다.
		printf("%d 년은 윤년입니다. \n", year);
	else
		printf("%d 년은 윤년이 아닙니다. \n", year);


	return 0;
}

void main()
{
	hw05();
}