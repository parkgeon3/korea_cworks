#include <stdio.h>
#include <stdlib.h>

//성적 관리 프로그램
typedef struct
{
	int math;
	int eng;
}Score;

//학생 구조체 정의
typedef struct
{
	int number; //학번
	char name[20]; //이름
	Score score;//성적 구조체 변수(참조)
}Student;

void showStudentInfo(Student); //학생 정보 함수 선언부
int main()
{
	Student s[3];
	int total[2] = { 0,0 };
	double avg[2] = { 0.0,0.0 };

	printf("== 성적 관리 프로그램 ==\n");
	for (int i = 0; i < 3; i++)
	{
		
		printf("학번 입력: ");
		scanf_s("%d", &s[i].number);
		
		printf("이름 입력: ");
		scanf_s("%s", s[i].name, sizeof(s[i].name));

		printf("수학 점수 입력: ");
		scanf_s("%d", &s[i].score.math);

		printf("영어 점수 입력: ");
		scanf_s("%d", &s[i].score.eng);
	}

	for (int i = 0 ; i < 3; i++)
	{
		total[0] = total[0] + s[i].score.math;
		total[1] = total[1] + s[i].score.eng;
		
	}
	avg[0] = (double)total[0] / 3;
	avg[1] = (double)total[1] / 3;
	printf("=========== 학생 정보 출력 ==============\n");
	//출력
	for (int i = 0; i < 3; i++)
	{
		showStudentInfo(s[i]); //학생 정보 함수 호출
	}
	printf("수학 총점 : %d, 영어 총점 : %.1f\n", total[0], total[1]);
	printf("수학 평균 : %d, 영어 평균 : %.1f\n", avg[0], avg[1]);
	//exe 파일 창이 닫히지 않도록 함
	system("pasue");
	
	return 0; 
	
}

//학생 정보 함수 정의
void showStudentInfo(Student st)
{
	printf("학번 : %d, 이름 : %s, 수학 점수 : %d, 영어 점수 : %d\n",
		st.number, st.name, st.score.math, st.score.eng);
}
