#include <stdio.h>


void CallByValue(int);
void CallByReference(int*);
int main_CallByRefe()
{
	int num = 10;
	//num++;
	int* pn = &num;

	printf("\n****값에 의한 호출****\n");
	CallByValue(num); //1을 더하는 함수
	printf("main 함수 내 값 변경후: %d\n", num);

	printf("\n****주소의 의한 호출****\n");
	CallByReference(pn);


	return 0;
}

void CallByValue(int n)
{
	n++;
	printf("지역 함수 내 값 변경후 : % d\n", n);
}
void CallByReference(int* p)
{
	printf("함수 내에서 값 변경후: %d\n", *p);
		(*p)++;
	printf("함수 내에서 값 변경후: %d\n", *p);
}