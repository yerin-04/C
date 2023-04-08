//202378076 유예린
//2023.04.08
//예제모음09 동전 교환 프로그램

#include <stdio.h>

int hw04()
{
	int money, c500, c100, c50, c10;
	//입력한 돈과 각 동전의 개수를 저장하는 변수

	printf(" ## 교환할 돈은 ?");
	scanf_s("%d", &money);
	//동전으로 교환할 액수를 입력

	c500 = money / 500;
	//500원짜리 동전의 개수를 계산
	money = money % 500;
	//500원짜리 동전으로 바꾼 후 나머지 금액

	c100 = money / 100;
	//100원짜리 동전의 개수를 계산
	money = money % 100;
	//100원짜리 동전으로 바꾼 후 나머지 금액

	c50 = money / 50;
	money = money % 50;

	c10 = money / 10;
	money = money % 10;

	printf("\n 오백 원짜리 ==> %d 개\n", c500);
	printf("\n 백 원짜리 ==> %d 개\n", c100);
	printf("\n 오십 원짜리 ==> %d 개\n", c50);
	printf("\n 십 원짜리 ==> %d 개\n", c10);
	printf("\n 바꾸지 못한 잔돈 ==> %d 원\n", money);

	return 0;
}

void main()
{
	hw04();
}