#include <stdio.h>

int main(void)
{
	double apple;// ���� ���� -�Ǽ���
	int banana; // ���� ���� - ������
	int orange; //���� ���� - ������

	apple = 5.0 / 2.0; // �Ǽ��� �Ǽ��� ������ ���� 
	banana = 5 / 2; // ������ ������ ������ ����
	orange = 5 % 2; // ������ ������ ������ ����(������ �������� ���, �ǿ����ڴ� ������ ����!)

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange); 

	return 0;
}