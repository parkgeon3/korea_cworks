#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()

//구조체 정의
typedef struct
{
	char name[20];
	int age;
	float height;
}Person;

int main_StructPerson2()
{
	// 구조체 변수 선언
	Person p1 = { "알파고", 11, 165.8f };
	
	/*strcpy(p1.name, "알파고");
	p1.age = 11;
	p1.height = 165.8f;*/

	printf("이름 : %s\n", p1.name);
	printf("나이 : %d\n", p1.age);
	printf("키 : %.1f\n", p1.height);

	return 0;
}