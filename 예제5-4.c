/*5-4. if 중첩문 사용하는 방법*/
#include <stdio.h>

int main(void)
{
	int a = 20, b = 10;

	if (a > 10)        //a가 10보다 크면, 10~17행 실행 + 작거나 같으면 20행으로 이동
	{
		if ( b >= 0 )  //b가 0 이상이면 b에 1 대입 + 20행으로 이동
		{
			b = 1;
		}
		else           //b가 0보다 작으면 b에 -1 대입 + 20행으로 이동
		{
			b = -1;
		}

	}

	printf("a : %d, b : %d\n", a, b);

	return 0;
}