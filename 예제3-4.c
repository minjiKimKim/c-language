/*unsigned�� �߸� ����� ���*/

#include <stdio.h>

int main(void)
{
	unsigned int a;
	
	a = 4294967295; // ū ��� ����
	printf("%d\n", a); // %d[��ȯ����]�� ���
	a = -1; // ���� ����
	printf("%u\n", a); // %u[��ȯ����]�� ���

	return 0;
}