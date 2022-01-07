/*4-8. 형 변환 연산자를 사용하는 방법 관찰하기*/

#include <stdio.h>

int main(void)
{
	int a = 20, b = 3; // 변수선언-정수형 
	double res; // 변수선언-실수형[실수형으로 변수선언한 이유는 res변수에 나눗셈 연산자의 결과값이 실수로 나오기에

	res = (double)a / (double)b; //나눗셈 연산자에서 정수는 몫만, 실수는 나머지까지 출력해줌 + (double)을 이용해 a와 b의 값을 실수로 변환
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res);

	a = (int)res; // (int)를 사용해 res값에서 정수 부분만 출력
	printf("(int)%.1lf의 결과 : %d\n", res, a);

	return 0;



}