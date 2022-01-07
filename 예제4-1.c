#include <stdio.h>

int main(void)
{
	int a, b; // 변수 선언 : 문자같은 경우는 정수 취급[아스키코드값]
	int sum, sub, mul, inv; // 변수 선언

	a = 10; // 대입연산, 저장공간인 변수에 입력한 값 저장
	b = 20; // 대입연산
	sum = a + b; // 더하기 연산 후, 대입연산[대입연산자 기준 오른쪽은 수식의 결과'값']
	sub = a - b; // 빼기 연산 후, 대입연산
	mul = a * b; // 곱하기 연산 후, 대입연산
	inv = -a; // 음수 연산 후, 대입 연산

	printf("a의 값 : %d, b의 값 : %d\n", a, b); 
	printf("덧셈 : %d\n", sum);
	printf("뺄셈 : %d\n", sub);
	printf("곱셈 : %d\n", mul);
	printf("a의 음수 연산 : %d\n", inv);

	return 0;

}