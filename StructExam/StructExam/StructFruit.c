#include <stdio.h>

//���� ����ü
typedef struct
{
	char name[20]; //���� �̸�
	int quantity; //����
	char *type; //����

}Fruit;

int main_Fruit()
{
	//������ �迭 ����
	char* types[] = { "Apple", "Banana", "Orange" };

	//����ü ���� ����
	Fruit f = { "�뱸 ���", 100, types[0] };

	printf("���� �̸� : %s\n", f.name);
	printf("���� ���� : %d\n", f.quantity);
	f.type = "Kiwi";
	printf("���� ���� : %s\n", f.type);

	return 0;
}