#include <stdio.h>
#include <stdlib.h> // malloc(), free()


int main_Mallocint()
{

	//�迭�� ũ�Ⱑ 4�� ������ �迭 ���� - �����Ҵ�
	int n[4];


	//����
	/*n[0] = 10;
	n[1] = 20;
	n[2] = 30;
	n[3] = 40;*/

	//���
	//for (int i = 0; i < 4; i++)
	//{
	//	printf("%d\n", n[i]);
	//}

	//���� �Ҵ�(������)
	int* pn = (int *)malloc(sizeof(int) * 4); //4Byte * 4 = 16Byte


	//����
	//pn[0] = 10;
	//pn[1] = 20;
	//pn[2] = 30;
	//pn[3] = 40;

	for (int i = 0; i < 4; i++)
	{
		pn[i] = i * 2;
	}

	for (int i = 0; i < 4; i++)
	{
		printf("%2d", pn[i]);
	}
	free(pn); //�޸� ����

	return 0;
}