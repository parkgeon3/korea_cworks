#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()

//���� ����ü
typedef struct
{
	//���� ���� �� ���
	int math;
	int	eng;
	double avg;
}Score;
//�л� ����ü
typedef struct
{
	//�й�,�̸�,����
	int number;
	char name[20];
	Score score;
}Student;

//�л����� ����Լ�
void showStudentinfo(Student st) //����ü �Ű�����
{
	printf("�й� : %d,�̸� : %s, ���� : %d, ���� : %d, ��� : %.1f\n",
		st.number, st.name, st.score.math, st.score.eng, st.score.avg);
}

int main_Student()
{
	//����ü ���� ����
	Student s1;

	//�л� ���� ����
	s1.number = 101;
	strcpy(s1.name, "���̽�");
	s1.score.math = 95;
	s1.score.eng = 80;
	s1.score.avg = (double)(s1.score.math + s1.score.eng) / 2;

	//�л� ���� ���
	showStudentinfo(s1);
	/*printf("�й� : %d, ���� : %d, ���� : %d, ��� : %.1f\n",
		s1.number, s1.score.math, s1.score.eng, s1.score.avg);*/

	return 0;
}