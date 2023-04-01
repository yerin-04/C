//202378076 유예린
//2023.03.29
//배열 기초1
#include <stdio.h>
/*
int app3()
{
	float st_h[10];
	//4바이트 실수 데이터 저장 공간 이름 st_h, 10개의 데이터 저장 => 배열 선언

	st_h[0] = 160;
	st_h[1] = 161;
	st_h[2] = 162;
	st_h[3] = 163;
	st_h[4] = 164;
	st_h[5] = 165;
	st_h[6] = 166;
	st_h[7] = 167;
	st_h[8] = 168;
	st_h[9] = 169;

	printf("0번 학생 키 : %f\n", st_h[0]);
	printf("1번 학생 키 : %f\n", st_h[1]);
	printf("2번 학생 키 : %f\n", st_h[2]);
	printf("3번 학생 키 : %f\n", st_h[3]);
	printf("4번 학생 키 : %f\n", st_h[4]);
	printf("5번 학생 키 : %f\n", st_h[5]);
	printf("6번 학생 키 : %f\n", st_h[6]);
	printf("7번 학생 키 : %f\n", st_h[7]);
	printf("8번 학생 키 : %f\n", st_h[8]);
	printf("9번 학생 키 : %f\n", st_h[9]);
	
	
	
	return 0;



}

void main()
{
	app3();
}
*/

/*
int test_init()
{
	int hap=0;
	//4바이트 크기, 정수형(소수점 이하 없음) 데이터 저자공간 이름은 hap
	//int로 4바이트의 공간 차지, 그 공간의 이름을 hap으로 붙임

	hap = hap + 10;
	hap = hap + 10;
	hap = hap + 10;
	hap = hap + 10;
	hap = hap + 10;
	// == hap += 10;

	printf("hap : %d", hap); //쓰레기값

	return 0;
}

void main()
{
	test_init();
}
*/

int app3_15()
{
	char str[10] = "012345678";
	printf("before: %s\n", str);

	str[0] = 'Y'; str[1] = 'E';
	str[2] = 'R'; str[3] = 'I';
	str[4] = 'N'; str[5] = '\0';

	printf("after: %s\n", str);
	printf("str[4]: %c\n", str[4]);
	printf("str[5]: %c\n", str[5]);
	printf("str[15]: %c\n", str[15]);






	return 0;
}

int main()
{
	app3_15();
	return 0;
}