/*8-1. 5명의 나이를 저장할 배열을 선언하고 사용하는 방법*/

#include <stdio.h>

int main(void)
{
	int ary[5];                         //int형 요소 5개의 배열선언 + arr는 array의 축약어

	ary[0] = 10;                        //첫번째 배열요소에 10 대입
	ary[1] = 20;                        // 두번째 배열요소에 20 대입
	ary[2] = ary[0] + ary[1];           // 세번째 배열요소에 첫번째 요소와 두번째 요소의 합 저장
	scanf("%d", &ary[3]);              //키보드로 입력받아, 네 번째 요소에 저장
	 
	printf("%d\n", ary[2]);             //세 번째 배열 요소 출력
	printf("%d\n", ary[3]);             
	printf("%d\n", ary[4]);             //마지막 배열 요소는 쓰레기값

	return 0;
}