#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	char* words[] = { "ant", "bear", "chicken", "cow", "deer", 
	 "elephant", "fox", "horse", "monkey", "tiger" };
	char* qustion; //문제
	char answer[20]; // 정답
	int n = 1;
	clock_t start, end; //시작시간, 종료시ㅏ간
	double elapsed; //소요 시간
	int size,idx; //배열의 크기


	srand(time(NULL));

	printf("영어타자 게임, 준비되면 엔터>");
	getchar();

	start = clock();
	while (n <= 10)
	{
		printf("\n문제 %d\n", n);
		size = sizeof(words) / sizeof(words[0]);
		idx = rand() % size;
		qustion = words[idx];
		printf("%s\n", qustion);
		scanf_s("%s", answer, sizeof(answer)); // 사용자 입력

		if (strcmp(qustion, answer) == 0)
		{
			printf("통과\n");
			n++;
		}
		else
		{
			printf("오타! 다시 도전\n");
		}

	}
	end = clock();
	//LOCKS_PER_SEC 상수는 ms(마이크로초)를 s(초)로 표시해줌
	elapsed = (double)(end - start) / CLOCKS_PER_SEC;
	printf("게임 소요 시간: %.2lf초\n", elapsed);


	return 0;
}