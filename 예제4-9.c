#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.4;

	printf("int�� ������ ũ�� : %d\n", sizeof(a)); // sizeof�� �Լ��� �ƴ� ������
	printf("double�� ������ ũ�� : %d\n", sizeof(b)); 
	printf("������ ����� ũ�� : %d\n", sizeof(10));
	printf("������ ������� ũ�� : %d\n", sizeof(1.5 + 3.4)); //sizeof�������� �ǿ����ڴ� ���, ����, ����, �ڷ��� �� �پ���
	printf("char �ڷ����� ũ�� : %d\n", sizeof(char)); //sizeof �������� �ǿ����� �� �ڷ���

	return 0;

}