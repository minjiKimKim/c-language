/*9-1. ������ �޸� �ּ� Ȯ��*/
#include <stdio.h>

int main(void)
{
	int a;                      //int�� �������� [4����Ʈ]
	double b;                   //double�� �������� [8����Ʈ]
	char c;                     //char�� ��������[1����Ʈ]

	printf("int�� ������ �ּ� : %u\n", &a);   //�ּ� �����ڷ� �ּ� ���[�ľ�]
	printf("double�� ������ �ּ� : %u\n", &b); 
	printf("char�� ������ �ּ� : %u\n", &c); 

	return 0;

}