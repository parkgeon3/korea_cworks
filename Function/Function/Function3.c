#include <stdio.h>
#include <math.h>
int myabs(int x)
{
	if (x < 0) 
	{
		return -x;
	}
	else 
	{
		return x;
	}
}

int main_Function3() 
{
	
	int value1, value2,value3;

	value1 = abs(-3);
	value2 = abs(+3);
	
	value3 = myabs(-3);
	
	printf("���� �Լ��� ���밪: %d\n", value1);
	printf("���� �Լ��� ���밪: %d\n", value2);
	printf("���� ���� �Լ��� ���밪: %d\n", value3);

	return 0;
}