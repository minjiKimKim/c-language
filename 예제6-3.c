/*6-3.do~while문을 사용한 반복문*/
#include <stdio.h>

int main(void)
{
	int a = 1;      

	do
	{
		a = a * 2;             //일단 실행문 시작한다
	} while (a < 10);          //실행문 실행 후, 조건식의 참 거짓 여부를 따지고 참이면 다시 실행문으로 돌아가 
	                           //실행을 반복하고, 조건식이 거짓이면 반복문 빠져나와 반복문 뒤 문장을 실행하자
	printf("a:%d\n", a);       //반복이 끝난 뒤 a값 출력

	return 0;                
}