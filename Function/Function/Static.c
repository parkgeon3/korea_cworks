#include <stdio.h>
void call();
int main_Static()
{

	call();
	call();
	call;

	return 0;
}

void call()
{

	static int x = 0;
	x += 1;

	printf("���� ȣ���� %d��°�Դϴ�.\n",x);
}