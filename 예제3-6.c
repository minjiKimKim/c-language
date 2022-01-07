/*char 배열에 문자열 저장 + 문자열 변수 선언 시에는 char 배열 이용함, 일단 문자열 저장 용도의 char 배열의 
사용법 위주로 배울 것.*/
#include <stdio.h>

int main(void)
{
	char fruit[20] = "starwberry"; // char 배열 선언과 문자열 초기화

	printf("딸기 : %s\n", fruit); // 배열명으로 저장된 문자열 출력
	printf("딸기잼 : %s %s\n", fruit, "jam"); // 문자열 상수를 직점 %s로 출력

	return 0;
}