/*7-2.매개변수가 없는 함수*/

#include <stdio.h>

int get_num(void);              //함수선언

int main(void)
{
	int result;

	result = get_num();         //함수 호출, 반환값은 result에 저장  
	printf("반환값 : %d\n", result); //반환값 출력
	return 0;
}

int get_num(void)              //매개변수가 없고 반환형만 있다
{
	int num;                   //키보드 입력값을 저장할 변수

	num = 10;                   // 데이터 입력 방법 1. 대입연산자
	printf("양수 입력 : %d\n ", num);    
	        

		return num;            //입력값 반환
}