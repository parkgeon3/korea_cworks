#include <stdio.h>

//�������� ������Ʈ
typedef struct
{
	//���� ���� �� ���
	int math;
	int	eng;
}Score;
//�л� ����ü
typedef struct
{
	//�й�,�̸�,����
	int number;
	char name[20];
	Score score;
}Student;

int main()
{
	//����ü �迭
	Student s[3];

	printf("============= ���� ���� ���α׷� ===============");
	//�ܼ� �Է�
	for (int i = 0; i < 3; i++)
	{
		printf("�й� �Է�:");
		scanf_s("%d", &s[i].number);
	}

	//�л� ���� ���
		for (int i = 0; i < 3; i++)
	{
		printf("�й� %d\n", s[i].number);
	}
	return 0;
}