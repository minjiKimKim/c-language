/*unsigned를 잘못 사용한 경우*/

#include <stdio.h>

int main(void)
{
	unsigned int a;
	
	a = 4294967295; // 큰 양수 저장
	printf("%d\n", a); // %d[변환문자]로 출력
	a = -1; // 음수 저장
	printf("%u\n", a); // %u[변환문자]로 출력

	return 0;
}