#include <stdio.h>

int main_Arrays2() 
{
	int score[] = { 85, 70, 90, 70, 85 };
	int n; //�ݺ� ����
	int total = 0; // �հ� ����: 0����
	double avg;
	// Ư�� ��ҿ� ����(��ȸ)
	printf("score[1] = %d\n", score[1]);
	printf("score[4] = %d\n", score[4]);

	// ��� ����
	score[2] = 95;
	printf("score[2] = %d\n", score[2]);
	


	// ��ü ��ȸ(�˻�)
	for (n = 0; n < 5; n++)
	{
		printf("%d\n", score[n]);
	}
	
	//����� �հ�
	printf("%d\n", score[0] + score[1]);

	for (n = 0; n < 5; n++)
	{
		total = total + score[n];
	}
	avg = total / 5.0;
	printf("�հ� : %d\n", total);
	//����� ��� = �հ�/����
	printf("%.1f",avg);

	return 0;

}