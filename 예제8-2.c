/*8-2. �迭�� �ݺ����� ����� ����ó�����α׷�*/
#include <stdio.h>

int main(void)
{
	int score[5];                 //�ټ� ������ ������ �Է��� int�� �迭 ����
	int i;                         // �ݺ� ���� ���� : �ݺ���
	int total = 0;                 // ������ ������ ����
	double avg;                    // ����� ������ ����

	for (i = 0; i < 5; i++)         //i�� 0���� 4���� 5�� �ݺ�
	{
		scanf("%d", &score[i]);        // �� �迭��ҿ� ���� �Է�
	}
	
	for (i = 0; i < 5; i++)
	{
		total += score[i];             //������ ������ ���� ���
	}
	avg = total / 5.0;                // ��հ��

	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);       //���� ���
	}

	printf("\n");                      

	printf("��� : %.1lf\n", avg);          //��� ���

	return 0;
}