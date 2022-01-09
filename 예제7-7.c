/*7-7. 3번 실행하는 재귀호출함수2*/
#include <stdio.h>

void fruit(int count);

int main(void)
{
	fruit(1);                    //1번 호출하므로, 1을 인수로 준다.

	return 0;
}

void fruit(int count)             // 호출횟수를 매개변수에 저장
{
	printf("apple\n");
	if (count == 3) return;       // 호출횟수가 3이면 반환하고 끝낸다
	fruit(count + 1);            // 재호출할 때, 호출횟수를 1 증가
	printf("jam\n");              //추가
}