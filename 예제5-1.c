/*5-1, if���� �⺻����*/
#include <stdio.h>

int main(void)
{
	int a = 20; 
	int b = 0;

	if (a > 10)         // ���ǽ� : a�� 10���� ũ�Ƿ�, ���ǽ��� ��
	{
		b = a;          // ���๮ : ���ǽ��� ���̹Ƿ�, b = a �� ����� 
	}
	printf("a : %d, b : %d\n", a, b);

	return 0;
}