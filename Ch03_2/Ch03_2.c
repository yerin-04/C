//202378076 ������
//2023.03.29
//�迭 ����1
#include <stdio.h>
/*
int app3()
{
	float st_h[10];
	//4����Ʈ �Ǽ� ������ ���� ���� �̸� st_h, 10���� ������ ���� => �迭 ����

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

	printf("0�� �л� Ű : %f\n", st_h[0]);
	printf("1�� �л� Ű : %f\n", st_h[1]);
	printf("2�� �л� Ű : %f\n", st_h[2]);
	printf("3�� �л� Ű : %f\n", st_h[3]);
	printf("4�� �л� Ű : %f\n", st_h[4]);
	printf("5�� �л� Ű : %f\n", st_h[5]);
	printf("6�� �л� Ű : %f\n", st_h[6]);
	printf("7�� �л� Ű : %f\n", st_h[7]);
	printf("8�� �л� Ű : %f\n", st_h[8]);
	printf("9�� �л� Ű : %f\n", st_h[9]);
	
	
	
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
	//4����Ʈ ũ��, ������(�Ҽ��� ���� ����) ������ ���ڰ��� �̸��� hap
	//int�� 4����Ʈ�� ���� ����, �� ������ �̸��� hap���� ����

	hap = hap + 10;
	hap = hap + 10;
	hap = hap + 10;
	hap = hap + 10;
	hap = hap + 10;
	// == hap += 10;

	printf("hap : %d", hap); //�����Ⱚ

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