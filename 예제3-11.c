#include <stdio.h>

int main(void)
{
	char grade; // char형 문자[아스키코드값=정수] 변수 선언
	char name[20]; // 문자열 배열선언- char 배열 선언

	printf("학점 입력 : ");
	scanf("%c", &grade); // grade 변수에 학점 문자 입력
	printf("이름 입력 : ");
	scanf("%s", name); // name 배열에 이름 문자열 입력, &를 사용하지 않는다.
	printf("%s의 학점은 %c입니다.\n", name, grade);

	return 0;

}