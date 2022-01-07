#include <stdio.h>

int main(void)
{
	printf("Be happy\n"); //"Be happy"를 출력하고 줄 바꿈(\n)
	printf("12345678901234567890\n"); //화면에 열 번호 입력 후 줄 바꿈(\n)
	printf("My\tfriend\n");
	//My를 출력하고 탭 위치로 이동(\t)후 friend 출력 후 줄 바꿈(\n)
	printf("Goot\bd\tchance\n");
	//t를 d로 바꾸고 탭 위치로 이동 후(\t) chance출력 후 줄 바꿈(\n)
	printf("Cow\rw\a\n");
	//맨 앞으로 이동(\r)해 c를 w로 바꾸고 벨소리(\a)내고 줄 바꿈(\n)

	return 0;
}