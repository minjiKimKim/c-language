#include <stdio.h>

int main(void)
{
	char grade; // char�� ����[�ƽ�Ű�ڵ尪=����] ���� ����
	char name[20]; // ���ڿ� �迭����- char �迭 ����

	printf("���� �Է� : ");
	scanf("%c", &grade); // grade ������ ���� ���� �Է�
	printf("�̸� �Է� : ");
	scanf("%s", name); // name �迭�� �̸� ���ڿ� �Է�, &�� ������� �ʴ´�.
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);

	return 0;

}