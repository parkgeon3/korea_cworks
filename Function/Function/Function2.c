#include <stdio.h>

int add(int x, int y); // �Լ� �����
int sub(int x, int y);
int main_Function2()
{


	int result, result2;
	int a = 10, b = 20;
	result = add(a, b); // �Լ� ȣ��

	result2 = sub(a, b);
	printf("���� ��� : %d\n", result);
	printf("�� ���: %d\n", result2);

	return 0;

}

//�Լ� ����
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}