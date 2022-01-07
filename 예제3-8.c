/* 변수는 저장공간이므로 언제든지 그 값을 바꿀 수 있으나, const 변수는 예외.*/
/*const를 사용한 변수는 변수를 상수처럼 사용해, 초기화된 값을 바꿀 수 없다*/

#include <stdio.h>

int main(void)
{
	int income = 0; // 소득액 초기화
	double tax;  // 세금 변수 선언
	const double tax_rate = 0.12; // const 사용한 변수 선언 및 세율 초기화

	income = 456; // 소득액 저장
	tax = income * tax_rate; // 세금 계산
	printf("세금은 : %.1lf", tax);

	return 0;
}