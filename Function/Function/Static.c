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

	printf("현재 호출은 %d번째입니다.\n",x);
}