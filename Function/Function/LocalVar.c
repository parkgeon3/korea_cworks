#include <stdio.h>


// ���� ���� ���� �ֱ�(Scope)
// ���(�Լ�, ���)�ȿ��� �ʱ�ȭ�ɶ� �����ǰ�
// ����� ����� �Ҹ�(����)�Ѵ�.
int sum10();
int main_Localvar()
{
	int value
		= sum10();

	printf("value = %d\n", value);

	value = sum10();
	printf("value = %d\n", value);
	//printf("x = %d\n", x);


	return 0;
}

int sum10()
{
	static int x = 1; // ��������


	x = x + 10;

	return x;
}