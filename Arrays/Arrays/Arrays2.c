#include <stdio.h>

int main_Arrays2() 
{
	int score[] = { 85, 70, 90, 70, 85 };
	int n; //반복 변수
	int total = 0; // 합계 변수: 0으로
	double avg;
	// 특정 요소에 접근(조회)
	printf("score[1] = %d\n", score[1]);
	printf("score[4] = %d\n", score[4]);

	// 요소 수정
	score[2] = 95;
	printf("score[2] = %d\n", score[2]);
	


	// 전체 조회(검색)
	for (n = 0; n < 5; n++)
	{
		printf("%d\n", score[n]);
	}
	
	//요소의 합계
	printf("%d\n", score[0] + score[1]);

	for (n = 0; n < 5; n++)
	{
		total = total + score[n];
	}
	avg = total / 5.0;
	printf("합계 : %d\n", total);
	//요소의 평균 = 합계/개수
	printf("%.1f",avg);

	return 0;

}