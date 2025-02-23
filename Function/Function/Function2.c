#include <stdio.h>

int add(int x, int y); // 함수 선언부
int sub(int x, int y);
int main_Function2()
{


	int result, result2;
	int a = 10, b = 20;
	result = add(a, b); // 함수 호출

	result2 = sub(a, b);
	printf("더한 결과 : %d\n", result);
	printf("뺀 결과: %d\n", result2);

	return 0;

}

//함수 정의
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}