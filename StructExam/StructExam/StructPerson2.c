#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()

//����ü ����
typedef struct
{
	char name[20];
	int age;
	float height;
}Person;

int main_StructPerson2()
{
	// ����ü ���� ����
	Person p1 = { "���İ�", 11, 165.8f };
	
	/*strcpy(p1.name, "���İ�");
	p1.age = 11;
	p1.height = 165.8f;*/

	printf("�̸� : %s\n", p1.name);
	printf("���� : %d\n", p1.age);
	printf("Ű : %.1f\n", p1.height);

	return 0;
}