#include <stdio.h>

int main(void)
{
	double apple;// 변수 선언 -실수형
	int banana; // 변수 선언 - 정수형
	int orange; //변수 선언 - 정수형

	apple = 5.0 / 2.0; // 실수와 실수의 나누기 연산 
	banana = 5 / 2; // 정수와 정수의 나누기 연산
	orange = 5 % 2; // 정수와 정수의 나머지 연산(나머지 연산자의 경우, 피연산자는 정수만 가능!)

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange); 

	return 0;
}