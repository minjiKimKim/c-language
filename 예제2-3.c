#include <stdio.h>

int main(void)
{
	printf("Be happy\n"); //"Be happy"�� ����ϰ� �� �ٲ�(\n)
	printf("12345678901234567890\n"); //ȭ�鿡 �� ��ȣ �Է� �� �� �ٲ�(\n)
	printf("My\tfriend\n");
	//My�� ����ϰ� �� ��ġ�� �̵�(\t)�� friend ��� �� �� �ٲ�(\n)
	printf("Goot\bd\tchance\n");
	//t�� d�� �ٲٰ� �� ��ġ�� �̵� ��(\t) chance��� �� �� �ٲ�(\n)
	printf("Cow\rw\a\n");
	//�� ������ �̵�(\r)�� c�� w�� �ٲٰ� ���Ҹ�(\a)���� �� �ٲ�(\n)

	return 0;
}