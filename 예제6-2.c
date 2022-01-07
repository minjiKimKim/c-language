/*6-2. for문을 사용한 반복문*/
#include <stdio.h>

int main(void)
{
	int a = 1;
	int i;             // 반복 횟수를 세기 위한 변수

	for (i = 0; i < 3; i++)        // i는 0으로 초기화된 뒤 > i가 3보다 작은 동안 > 실행문을 실행
	{
		a = a * 2;
	}

	printf("a : %d\n", a);       // 조건식이 거짓이 된 순간, for문을 빠져나온 뒤 a값 출력

	return 0;
}