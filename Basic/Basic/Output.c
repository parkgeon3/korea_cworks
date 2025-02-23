#include <stdio.h>

int main_Output() 
{



	int number = 11;
	char place = 'B'; // 문자 1개는 홀따옴표
	char name[] = "박건호"; // 문자 여러개 - 문자열
	float weight = 60.3f; //실수 - 끝에 'f'를 붙임 
	double height = 183.2f;

	printf("%d, %dByte\n", 
		number, sizeof(number));
	printf("%d\n", number);
	printf("%c강의장, %dByte\n", 
		place, sizeof(place));
	printf("제 이름은 %s입니다. %dByte\n", 
		name, sizeof(name));
	printf("몸무게는 %.2f입니다. %dByte\n", 
		weight, sizeof(weight));
	printf("키는 %.2f입니다. %dByte\n",
		height, sizeof(height));

	// 자료형의 크기 - sizeof(자료형)

	return 0;
}