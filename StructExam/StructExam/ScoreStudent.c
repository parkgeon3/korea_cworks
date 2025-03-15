#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()

//성적 구조체
typedef struct
{
	//과목별 점수 및 평균
	int math;
	int	eng;
	double avg;
}Score;
//학생 구조체
typedef struct
{
	//학번,이름,성적
	int number;
	char name[20];
	Score score;
}Student;

//학생정보 출력함수
void showStudentinfo(Student st) //구조체 매개변수
{
	printf("학번 : %d,이름 : %s, 수학 : %d, 영어 : %d, 평균 : %.1f\n",
		st.number, st.name, st.score.math, st.score.eng, st.score.avg);
}

int main_Student()
{
	//구조체 변수 선언
	Student s1;

	//학생 정보 저장
	s1.number = 101;
	strcpy(s1.name, "이이슬");
	s1.score.math = 95;
	s1.score.eng = 80;
	s1.score.avg = (double)(s1.score.math + s1.score.eng) / 2;

	//학생 정보 출력
	showStudentinfo(s1);
	/*printf("학번 : %d, 수학 : %d, 영어 : %d, 평균 : %.1f\n",
		s1.number, s1.score.math, s1.score.eng, s1.score.avg);*/

	return 0;
}