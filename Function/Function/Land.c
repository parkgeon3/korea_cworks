#include <stdio.h>
#include <stdlib.h> //srand(), rand() ����

int main_Land()
{
	int rndVal; //�������� ������ ���� ����
	int coin,dice; //����,�ֻ���
	//rand() - ����(������ ��)
	//srand(11); //seed�� ���� ����
	srand(time(NULL)); //�ð��� �帧���� �Ź� seed�� �ٲ�

	rndVal = rand(); //rand()�Լ� ȣ��
	printf("%d\n", rndVal);

	//����
	coin = rand() % 2; //������ 0, 1
	printf("����: %d\n", coin);

	if (coin == 0)
	{
		printf("�ո�\n");
	}
	else
	{
		printf("�޸�\n");
	}

	//�ֻ��� ��
	dice = rand() % 6 + 1; //������ 0~5�� 1����, �ֻ����� 1~6
	printf("�ֻ��� ��: %d\n", dice);

	//�ֻ��� 10�� ������
	for (int i = 0; i < 10; i++)
	{
		dice = rand() % 6 + 1;
		printf("�ֻ��� ��: %d\n", dice);
	}
	
	//������� �����ϰ� ���
	char season[][5] = {"��","����","����","�ܿ�"};

	int rndIdx = 0;

	/*printf("%s\n", season[0]);
	printf("%s\n", season[1]);
	printf("%s\n", season[2]);
	printf("%s\n", season[3]);*/

	int size = sizeof(season) / sizeof(season[0]);

	rndIdx = rand() % size; //������ 0~3
	printf("%s\n", season[rndIdx]);

	//������� �����ͷ� ����
	char *season2[] = { "��","����","����","�ܿ�" };
	
	printf("����: %s\n", season2[rndIdx]);
	return 0;
}