/*9-1. 변수의 메모리 주소 확인*/
#include <stdio.h>

int main(void)
{
	int a;                      //int형 변수선언 [4바이트]
	double b;                   //double형 변수선언 [8바이트]
	char c;                     //char형 변수선언[1바이트]

	printf("int형 변수의 주소 : %u\n", &a);   //주소 연산자로 주소 계산[파악]
	printf("double형 변수의 주소 : %u\n", &b); 
	printf("char형 변수의 주소 : %u\n", &c); 

	return 0;

}