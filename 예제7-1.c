/*7-1. 2���� �Լ��� ���� ���α׷�*/
#include <stdio.h>

int sum(int x, int y);           //sum �Լ� "����" : �̵� ��� ��

int main(void)
{
	int a = 10, b = 20;
	int result;                  //�� ������ ���� ���(result)�� ������ ����

	result = sum(a, b);          // sum �Լ� "ȣ��"
	printf("result : %d\n", result);

	return 0;
}                                // main�Լ��� ��

int sum(int x, int y)            // �Լ� "����" ����
{
	int temp;                    // �� ������ ���� ��� ������ ����

	temp = x + y;                // x�� y�� ���� temp�� ����

	return temp;                 // return �ٷ� ���� "��ȯ�� ��" �� ���� ��!! ��, temp�� ���� ��ȯ
}