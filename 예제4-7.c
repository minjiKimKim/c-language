/*4-7. 연산의 결과값을 사용하는 방법*/
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res; // 변수 선언[정수형]

	a + b; // 연산결과가 바로 버려짐 > 쓸데없는 식
	printf("%d + %d = %d\n", a, b, a + b); //연산결과를 바로 출력에 사용
	
	res = a + b; //연산된 결과값을 변수에 저장
	printf("%d+%d=%d\n", a, b, res); 

	return 0;
}