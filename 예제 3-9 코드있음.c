#include <stdio.h>

int main(void)
{
	int a; 

	scanf("%d", &a); // 입력한 값을 변수라는 저장공간에 저장하는 법 1)초기화[대입 연산자 이용] 2)scanf함수 사용 
	printf("입력된 값 : %d\n", a);

	return 0;
}