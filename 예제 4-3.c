/* 4.3 증감 연산자의 연산*/

#include <stdio.h>

int main(void)
{
	int a = 10, b = 10; // 변수선언 - 정수형

	++a; // 증감연산자 - 변수의 값을 1만큼 증가 ; a = a+1 과 같은 수식
	--b; // 증감연산자 - 변수의 값을 1만큼 감소 ; b = b-1 과 같은 수식

	printf("a : %d\n", a);
	printf("b : %d\n", b);

	return 0;
}