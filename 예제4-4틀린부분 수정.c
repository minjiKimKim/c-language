#include <stdio.h>

int main(void)
{
	int a = 5, b = 5; //변수선언[정수형] + 초기화[대입연산자]
	int pre, post; //변수선언[정수형]

	pre = (++a) * 3; // 전위형 증감 연산자
	post = (b++) * 3;// 후위형 증감 연산자

	printf("초깃값 a = %d, b=%d\n", a, b);
	printf("전위형: (++a)*3 = %d, 후위형: (b++)*3 = %d\n", pre, post);

	return 0;
}﻿