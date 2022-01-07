/*4-5. 관계 연산의 결과값 확인*/
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 10; // 변수선언[정수형]과 초기화[대입연산자로 저장공간인 변수에 입력 값 저장]
	int res; // 결과값을 저장할 변수 선언[정수형일 것!]

	res = a > b; // 관계 연산자를 이용해 a>b의 특정 기준에 관해 명령 + 대입연산자로 오른쪽 수식의 값을 왼쪽 저장공간인 변수에 저장
	printf("a > b : %d\n", res);
	res = a >= b; //관게연산자로 특정 기준에 관해 명령 + 대입연산자로 저장값 초기화
	printf("a >=b : %d\n", res);
	res = (a < b); 
	printf("a < b : %d\n", res);
	res = (a <= b);
	printf("a <= b : %d\n", res);
	res = (a <= c);
	printf("a <= c: %d\n", res);
	res = (a == b);
	printf("a == b : %d\n", res);
	res = (a != c);
	printf("a != c : %d\n", res);

	return 0;

}