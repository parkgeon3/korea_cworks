#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	char* words[] = { "ant", "bear", "chicken", "cow", "deer", 
	 "elephant", "fox", "horse", "monkey", "tiger" };
	char* qustion; //����
	char answer[20]; // ����
	int n = 1;
	clock_t start, end; //���۽ð�, ����ä���
	double elapsed; //�ҿ� �ð�
	int size,idx; //�迭�� ũ��


	srand(time(NULL));

	printf("����Ÿ�� ����, �غ�Ǹ� ����>");
	getchar();

	start = clock();
	while (n <= 10)
	{
		printf("\n���� %d\n", n);
		size = sizeof(words) / sizeof(words[0]);
		idx = rand() % size;
		qustion = words[idx];
		printf("%s\n", qustion);
		scanf_s("%s", answer, sizeof(answer)); // ����� �Է�

		if (strcmp(qustion, answer) == 0)
		{
			printf("���\n");
			n++;
		}
		else
		{
			printf("��Ÿ! �ٽ� ����\n");
		}

	}
	end = clock();
	//LOCKS_PER_SEC ����� ms(����ũ����)�� s(��)�� ǥ������
	elapsed = (double)(end - start) / CLOCKS_PER_SEC;
	printf("���� �ҿ� �ð�: %.2lf��\n", elapsed);


	return 0;
}