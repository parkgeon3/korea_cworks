#include <stdio.h>

int main_PointerArray()
{
	//������ �迭 - ũ�Ⱑ(4)
	int a[4] = { 10, 20, 30, 40 };
	//������ ������ �迭
	int* pa;

	pa = a; //pa = &a[0]; //�迭 a�� �ּ� ����

	//printf("a[0]�� ����: %d\n", a[0]);
	//printf("a[0]�� �޸� �ּҴ�: %x\n", &a[0]);
	//printf("�迭�� �̸� a�� �� %x\n", a);

	//printf("a[0]�� ����: %d\n", a[1]);
	//printf("a[0]�� �޸� �ּҴ�: %x\n", &a[1]);
	//printf("�迭�� �̸� a + 1�� �� %x\n", a + 1);

	/*for (int i = 0; i < 4; i++)
	{
		printf("%d %x %x\n", pa[i], &pa[i], pa + i);
	}*/
	
	//������ = �����Ͱ� ����Ű�� ��
	/*printf("������ pa�� ����Ű�� �޸𸮰�: %d\n", *pa);
	printf("������ pa + 1�� ����Ű�� �޸𸮰�: %d\n", *(pa + 1));*/

	for (int i = 0; i < 4; i++)
	{
		printf("%x %d\n", pa + i, *(pa + i));
	}

	printf("-----------------------------\n");
	//���ڿ�(�迭)�� ������
	char msg[] = "Good Luck";
	char* p = msg; //msg�� �ּҸ� ����

	/*printf("%c\n", msg[0]);
	printf("%c\n", msg[1]);
	printf("%s\n", msg);*/


	//�ڷ����� ũ��
	printf("���ڿ��� ũ�� : %dByte\n", sizeof(msg));
	printf("���ڿ� �������� ũ�� : %dByte\n", sizeof(p));

	//�޸� �ּ�
	printf("���ڿ��� �迭�� �ּ� : %x\n", msg); //&msg[0]
	printf("���ڿ��� �������� �� : %x\n", p);

	//�ּҸ� �̿��� ���ڿ� ���
	printf("%s\n", p);
	printf("%s\n", p + 1);
	printf("%s\n", p + 2);
	printf("%s\n", p + 3);
	printf("%s\n", p + 4);

	printf("-----------------------------\n");

	//������ ������(*) �� ���
	printf("%c\n", *p); //*(p + 0)
	printf("%c\n", *(p + 1)); 
	printf("%c\n", *(p + 2)); 
	printf("%c\n", *(p + 3)); 

	//���ڿ��� ũ��
	int size = sizeof(msg) / sizeof(msg[1]);
	printf("%d\n",size);

	for (int i = 0; i < size; i++)
	{
		printf("%c", *(p + i));
	}


	return 0;
}