#include <stdio.h>

int main(void)
{
	int a; // int�� ���� a ���� + ������ �����ϴ� �޸� ������ int �ڷ��� ���� , a��� ���̱�
	int b, c; // 2���� int�� ���� b,c ���� ����
	double da; // double�� ���� da ����
	char ch; //char�� ���� ch ����

	a = 10; // int�� ���� a�� ���� 10 ����[�ʱ�ȭ ����, �����Ⱚ ����]
	b = a; // int ���� b�� ���� a �� ����
	c = a + 20; // int ���� c�� ���� a���� ���� 20�� ���� �� ����
	da = 3.5; // double�� ���� da�� �Ǽ� 3.5 ����
	ch = 'A'; // char�� ���� ch�� ���� 'A' ����

	printf("���� a�� �� : %d\n", a);
	printf("���� b�� �� : %d\n", b);
	printf("���� c�� �� : %d\n", c);
	printf("���� da�� �� : %.1lf\n", da);
	printf("���� ch�� ��: %c\n", ch);

	return 0;
}