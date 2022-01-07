#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.4;

	printf("int형 변수의 크기 : %d\n", sizeof(a)); // sizeof은 함수가 아닌 연산자
	printf("double형 변수의 크기 : %d\n", sizeof(b)); 
	printf("정수형 상수의 크기 : %d\n", sizeof(10));
	printf("수식의 결과값의 크기 : %d\n", sizeof(1.5 + 3.4)); //sizeof연산자의 피연산자는 상수, 변수, 수식, 자료형 등 다양함
	printf("char 자료형의 크기 : %d\n", sizeof(char)); //sizeof 연산자의 피연산자 중 자료형

	return 0;

}