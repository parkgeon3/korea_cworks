#include <stdio.h>
#define MAX_LEN 4 //���


int main()
{



	//������ �迭 ����
	int carts[MAX_LEN];
	int idxOfCarts = 0;


	//��� ����
	if (idxOfCarts >= MAX_LEN)
	{
		printf("�� �̻� ������ �� �����ϴ�.");
		return;
		//�������
	}


	carts[idxOfCarts++] = 80;  // carts[1]
	carts[idxOfCarts++] = 70;  // carts[2]
	carts[idxOfCarts++] = 95;  // carts[3]
	carts[idxOfCarts++] = 90;  // carts[4]
	//carts[idxOfCarts++] = 90;  // carts[5]

	//��� ����
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];

	if (idxOfCarts < 0)
	{
		printf("�� �̻� ������ �� �����ϴ�.\n");
	}
	for (int i = 0; i < idxOfCarts; i++)
	{
		printf("%3d", carts[i]);
	}

	//�ݺ������� �Է� �ޱ�
	while (1) // True - 1, False - 0
	{
		printf("���� �Է�: ");
		scanf_s("%d", &carts[idxOfCarts++]);

		if (idxOfCarts >= MAX_LEN)
		{
			puts("�� �̻� �߰��� �� ����!!");
			return; //��� ���� - �ݺ��� Ż��
		}
	}
	for (int i = 0; i < idxOfCarts; i++)
	{
		printf("%3d", carts[i]);
	}
	//printf("%d\n", idxOfCarts);
	//printf("%d\n", carts[idxOfCarts]);
	return 0;
}