#include <stdio.h>
#include <stdlib.h>

//���� ���� ���α׷�
typedef struct
{
	int math;
	int eng;
}Score;

//�л� ����ü ����
typedef struct
{
	int number; //�й�
	char name[20]; //�̸�
	Score score;//���� ����ü ����(����)
}Student;

void showStudentInfo(Student); //�л� ���� �Լ� �����
int main()
{
	Student s[3];
	int total[2] = { 0,0 };
	double avg[2] = { 0.0,0.0 };

	printf("== ���� ���� ���α׷� ==\n");
	for (int i = 0; i < 3; i++)
	{
		
		printf("�й� �Է�: ");
		scanf_s("%d", &s[i].number);
		
		printf("�̸� �Է�: ");
		scanf_s("%s", s[i].name, sizeof(s[i].name));

		printf("���� ���� �Է�: ");
		scanf_s("%d", &s[i].score.math);

		printf("���� ���� �Է�: ");
		scanf_s("%d", &s[i].score.eng);
	}

	for (int i = 0 ; i < 3; i++)
	{
		total[0] = total[0] + s[i].score.math;
		total[1] = total[1] + s[i].score.eng;
		
	}
	avg[0] = (double)total[0] / 3;
	avg[1] = (double)total[1] / 3;
	printf("=========== �л� ���� ��� ==============\n");
	//���
	for (int i = 0; i < 3; i++)
	{
		showStudentInfo(s[i]); //�л� ���� �Լ� ȣ��
	}
	printf("���� ���� : %d, ���� ���� : %.1f\n", total[0], total[1]);
	printf("���� ��� : %d, ���� ��� : %.1f\n", avg[0], avg[1]);
	//exe ���� â�� ������ �ʵ��� ��
	system("pasue");
	
	return 0; 
	
}

//�л� ���� �Լ� ����
void showStudentInfo(Student st)
{
	printf("�й� : %d, �̸� : %s, ���� ���� : %d, ���� ���� : %d\n",
		st.number, st.name, st.score.math, st.score.eng);
}
