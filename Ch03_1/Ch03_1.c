//202378076 유예린
//2023.03.27
//표준출력함수 printf() 서식 확인

#include <stdio.h>

int gibon3_6()
{
	printf("\n줄 바꿈\n연습 \n");
	printf("\t탭키\t연습 \n");
	printf("이것을\r덮어씁니다 \n");
	printf("\a\a\a삐소리 3번 \n");
	printf("글자가 \"강조\"되는 효과 \n");
	printf("\\\\\\ 역슬래시 세 개 출력 \n");

	return 0;
}

void main()
{
	gibon3_6();
}