/*5-5. 중첩if문[형태2. 분할정복기법] 에서 중괄호가 반드시 필요한 경우*/

#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;

	if (a < 0)               // a가 0보다 작을 때
	{
		if (b > 0)          // a가 0보다 작을 때 + b가 0보다 클 때, ok 출력
		{
			printf("ok");
		}
	}
	else                    // a가 0보다 크거나 같을 때
	{
		printf("ok");       // a가 0 이상이면, ok 출력
	}

	return 0;
}