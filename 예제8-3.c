/*8-3. sizeof �����ڸ� ����� �迭 */
#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;                   //�迭 ����� ������ ������ ����

	count = sizeof(score) / sizeof(score[0]);          //�迭 ����� ���� ���

	for (i = 0; i < count; i++)                //11�࿡�� ����� count��ŭ �ݺ�
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < count; i++)                   //11�࿡�� ����� count��ŭ �ݺ�
	{
		total += score[i];
	}
	avg = total / (double)count;                 //������ count�� ������ ��հ��

	for (i = 0; i < count; i++)                 // 11�࿡�� ����� count��ŭ �ݺ�
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("��� : %.1lf\n", avg);

	return 0;
}