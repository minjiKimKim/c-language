/*5-6. switch~case문 사용법과 논리구조*/
#include <stdio.h>

int main(void)
{
	int rank = 2, m = 0;

	switch (rank)                 //rank값이 얼마인지 확인
	{
	case 1:                       //rank가 1이면(rank = 1)
		m = 300;                  //m = 300 수행하고 
		break;                    //블록을 벗어나 23행으로 이동
	case 2:                       //rank가 2면  (rank = 2)
		m = 200;                  //m = 200을 수행하고
		break;                    //블록을 벗어나 23행으로 이동  
	case 3:                       //rank가 3이면(rank = 3)           
		m = 100;                  //m = 100을 수행하고
		break;                    //블록을 벗어나 23행으로 이동
	default:                      //rank와 일치하는 case의 값이 없으면   
		m = 10;                   //m = 10을 수행하고
		break;                    //블록을 벗어나 23행으로 이동    
	}

	printf("m : %d\n", m);
	
	return 0;
}