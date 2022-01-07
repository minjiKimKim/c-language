/* char '변수' 선언과 char '배열' 선언은 다른 것, 대표적으로 대입 연산자 사용 가능 여부
   char 배열에 문자열 복사*/

#include <stdio.h>
#include <string.h> // 문자열을 다룰 수 있는 string.h 헤더 파일 포함

int main(void)
{
	char fruit[20] = "strawberry"; // strawberry로 초기화

	printf("%s\n",fruit); // strawberry 출력
	strcpy(fruit, "banana"); // fruit에 banana 복사
	printf("%s\n", fruit); // banana 출력

	return 0;
}