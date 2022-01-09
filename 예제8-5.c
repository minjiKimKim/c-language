/*8-5. 문자열을 대입하는 strcpy함수*/
#include <stdio.h>
#include <string.h>                         //문자열 관련 함수 원형을 모아놓은 헤더파일

int main(void)
	{
		char str1[80] = "cat";
        char str2[80];

		strcpy(str1, "tiger");              //str1배열에 "tiger" 복사
		strcpy(str2, str1);                 //st2 배열에 str1 배열의 문자열[tiger] 복사
		printf("%s, %s\n", str1, str2);

		return 0;


	}
