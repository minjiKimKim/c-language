/* ������ ��������̹Ƿ� �������� �� ���� �ٲ� �� ������, const ������ ����.*/
/*const�� ����� ������ ������ ���ó�� �����, �ʱ�ȭ�� ���� �ٲ� �� ����*/

#include <stdio.h>

int main(void)
{
	int income = 0; // �ҵ�� �ʱ�ȭ
	double tax;  // ���� ���� ����
	const double tax_rate = 0.12; // const ����� ���� ���� �� ���� �ʱ�ȭ

	income = 456; // �ҵ�� ����
	tax = income * tax_rate; // ���� ���
	printf("������ : %.1lf", tax);

	return 0;
}