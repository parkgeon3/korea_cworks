#include <stdio.h>


void CallByValue(int);
void CallByReference(int*);
int main_CallByRefe()
{
	int num = 10;
	//num++;
	int* pn = &num;

	printf("\n****���� ���� ȣ��****\n");
	CallByValue(num); //1�� ���ϴ� �Լ�
	printf("main �Լ� �� �� ������: %d\n", num);

	printf("\n****�ּ��� ���� ȣ��****\n");
	CallByReference(pn);


	return 0;
}

void CallByValue(int n)
{
	n++;
	printf("���� �Լ� �� �� ������ : % d\n", n);
}
void CallByReference(int* p)
{
	printf("�Լ� ������ �� ������: %d\n", *p);
		(*p)++;
	printf("�Լ� ������ �� ������: %d\n", *p);
}