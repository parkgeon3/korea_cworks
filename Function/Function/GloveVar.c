#include <stdio.h>

//���������� ���� �ֱ�
//���α׷��� ���۵ɶ� �����ǰ�
//���α׷��� ����ɶ� �Ҹ�(����) �Ѵ�.
int x = 1; // ���� ����(Global Variable)
int add10(); // �Լ� �����


int main_GlobalVar()
{
	printf("x = %d\n", x);
	int value = add10();// valyue - ��������(Local Variable)
	printf("value = %d\n", value);
	printf("x = %d\n", x);

	return 0;
}

int add10()
{
	x = x + 10;
	
	return x;
}