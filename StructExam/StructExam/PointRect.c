#include <stdio.h>

//Point ����ü ����
struct Point
{
	//���� ��ǥ
	int x;
	int y;
};

//Rectangle ����ü ����
struct Rectangle
{
	struct Point p1; //����ü ����(Reference)
	struct Point p2;
};

int main_PointRect()
{
	struct Rectangle rect;


	rect.p1.x = 1;
	rect.p1.y = 4;
	
	rect.p2.x = 4;
	rect.p2.y = 1;

	printf("��1(%d, %d),��2(%d, %d)\n",
		rect.p1.x, rect.p1.y, rect.p2.x, rect.p2.y);

	return 0;
}