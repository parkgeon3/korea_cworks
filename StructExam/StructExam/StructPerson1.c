#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()

//Person ����ü(�ڷ���)
struct Person
{
	//�̸� , ����, Ű
	char name[20];
	int age;
	float height;
};

int main_StructPearson1()
{
	//����ü ����(��ü) ����
	struct Person p1 = { "���İ�", 11, 165.8f };

	//�ɹ� ������ ����(�� ������ ���)

	//p1.name = "���İ�"; //strcpy()
	/*strcpy(p1.name, "���İ�");
	p1.age = 11;
	p1.height = 165.8f;*/

	

	//���
	printf("�̸� : %s\n", p1.name);
	printf("���� : %d\n", p1.age);
	printf("Ű : %.1f\n", p1.height);

	//����ü �迭
	struct Person p[3] = {
		{"�̻�", 15, 170.5f},
		{"�Ѱ�", 42, 160.9f},
		{"�ں�", 20, 173.4f},
	};

	for (int i = 0; i < 3; i++)
	{
		printf("�̸�: %s, ����: %d, Ű: %.1f\n", p[i].name, 
			p[i].age, p[i].height);
	}

	return 0;
}