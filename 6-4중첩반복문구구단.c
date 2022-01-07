/*중첩반복문으로 구구단 만들기*/
#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 2; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}

	return 0;
}