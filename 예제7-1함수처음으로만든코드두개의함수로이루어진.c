/*7-1. 2개의 함수로 만든 프로그램*/
#include <stdio.h>

int sum(int x, int y);           //sum 함수 "선언" : 이따 배울 것

int main(void)
{
	int a = 10, b = 20;
	int result;                  //두 정수를 더한 결과(result)를 저장할 변수

	result = sum(a, b);          // sum 함수 "호출"
	printf("result : %d\n", result);

	return 0;
}                                // main함수의 끝

int sum(int x, int y)            // 함수 "정의" 시작
{
	int temp;                    // 두 정수의 합을 잠시 저장할 변수

	temp = x + y;                // x와 y의 합을 temp에 보관

	return temp;                 // return 바로 옆에 "반환할 값" 을 적을 것!! 즉, temp의 값을 반환
}
