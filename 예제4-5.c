/*4-5. ���� ������ ����� Ȯ��*/
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 10; // ��������[������]�� �ʱ�ȭ[���Կ����ڷ� ��������� ������ �Է� �� ����]
	int res; // ������� ������ ���� ����[�������� ��!]

	res = a > b; // ���� �����ڸ� �̿��� a>b�� Ư�� ���ؿ� ���� ��� + ���Կ����ڷ� ������ ������ ���� ���� ��������� ������ ����
	printf("a > b : %d\n", res);
	res = a >= b; //���Կ����ڷ� Ư�� ���ؿ� ���� ��� + ���Կ����ڷ� ���尪 �ʱ�ȭ
	printf("a >=b : %d\n", res);
	res = (a < b); 
	printf("a < b : %d\n", res);
	res = (a <= b);
	printf("a <= b : %d\n", res);
	res = (a <= c);
	printf("a <= c: %d\n", res);
	res = (a == b);
	printf("a == b : %d\n", res);
	res = (a != c);
	printf("a != c : %d\n", res);

	return 0;

}