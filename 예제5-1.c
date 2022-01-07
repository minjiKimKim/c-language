/*5-1, if문의 기본형식*/
#include <stdio.h>

int main(void)
{
	int a = 20; 
	int b = 0;

	if (a > 10)         // 조건식 : a가 10보다 크므로, 조건식은 참
	{
		b = a;          // 실행문 : 조건식이 참이므로, b = a 가 실행됨 
	}
	printf("a : %d, b : %d\n", a, b);

	return 0;
}