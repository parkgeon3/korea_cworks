#include <stdio.h>

int main_Output() 
{



	int number = 11;
	char place = 'B'; // ���� 1���� Ȧ����ǥ
	char name[] = "�ڰ�ȣ"; // ���� ������ - ���ڿ�
	float weight = 60.3f; //�Ǽ� - ���� 'f'�� ���� 
	double height = 183.2f;

	printf("%d, %dByte\n", 
		number, sizeof(number));
	printf("%d\n", number);
	printf("%c������, %dByte\n", 
		place, sizeof(place));
	printf("�� �̸��� %s�Դϴ�. %dByte\n", 
		name, sizeof(name));
	printf("�����Դ� %.2f�Դϴ�. %dByte\n", 
		weight, sizeof(weight));
	printf("Ű�� %.2f�Դϴ�. %dByte\n",
		height, sizeof(height));

	// �ڷ����� ũ�� - sizeof(�ڷ���)

	return 0;
}