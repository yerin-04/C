//202378076 유예린
//2023.03.29
//배열 기초1
#include <stdio.h>
/*
int app3()
{
	float st_h[10];

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