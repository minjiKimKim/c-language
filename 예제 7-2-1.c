/*7-2.�Ű������� ���� �Լ�*/

#include <stdio.h>

int get_num(void);              //�Լ�����

int main(void)
{
	int result;

	result = get_num();         //�Լ� ȣ��, ��ȯ���� result�� ����  
	printf("��ȯ�� : %d\n", result); //��ȯ�� ���
	return 0;
}

int get_num(void)              //�Ű������� ���� ��ȯ���� �ִ�
{
	int num;                   //Ű���� �Է°��� ������ ����

	num = 10;                   // ������ �Է� ��� 1. ���Կ�����
	printf("��� �Է� : %d\n ", num);    
	        

		return num;            //�Է°� ��ȯ
}