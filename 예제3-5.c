/*실수 자료형 변수 선언 + 유효 숫자 확인*/

#include <stdio.h>

int main(void)
{
	float ft = 1.234567890123456789; // 유효 숫자가 많은 값으로 초기화
	double db = 1.234567890123456789; // 유효 숫자가 많은 값으로 초기화

	printf("float형 변수의 값 : %.20lf\n", ft); // 소수점 이하 20자리까지 출력
	printf("double형 변수의 값 : %20lf\n", db);

	return 0;
}