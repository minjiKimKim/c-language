/*7-2-2. �Ű������� ���� �Լ� 2. scanf�Լ�*/
#include <stdio.h>

int get_num(void);               //�Լ� ����

int main(void)
{
	int result;

	result = get_num();             //�Լ� ȣ��, ��ȯ���� result�� ����
	printf("��ȯ�� : %d\n", result); // ��ȯ�� ���
	return 0;
}

int get_num(void)
{
	int num;                     // �Ű������� ���� ��ȯ���� �ִ�

	printf("��� �Է� : ");        //�Է� �ȳ� �޼���
	scanf("%d", &num);              //Ű���� �Է�

	return num;                   //�Է°� ��ȯ
}