/*4-6. 논리연산의 결과값 확인*/
#include <stdio.h>

int main(void)
{
	int a = 30;
	int res;

	res = (a > 10) && (a < 20); //변수에 논리연산자 결과값을 저장
	printf("(a>10) && (a<20) : %d\n", res); //변수에 저장된 논리연산자 결과값을 출력
	res = (a < 20) || (a > 20); //변수에 논리연산자 결과값을 저장
	printf("(a<20) || (a>20) : %d\n", res); //변수에 저장된 논리연산자의 결과값을 출력
	res = !(a >= 30);
	printf("!(a>=30) : %d\n", res);

	return 0;

}