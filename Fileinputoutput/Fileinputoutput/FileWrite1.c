#define _CRT_SECURE_NO_WARNINGS //fopen() ���� ����
#include <stdio.h>

//���� ����
int main_FileWrite()
{
	//���� ����ü ������ ����
	FILE* fp;

	//fopen(����, ���) : ������ - w, �ϱ��� - r
	fp = fopen("out.txt", "w"); //���� ����
	//����(����) ó��
	if (fp == NULL)
	{
		printf("���� ���⿡ ������\n");
		return 1; //0-����, 1 or -1 -����
	}

	// ���� ����
	// �� ���� ����
	fputc('H', fp);
	fputc('e', fp);
	fputc('l', fp);
	fputc('l', fp);
	fputc('o', fp);

	//���ڿ� ����
	fputs("\nApple\n", fp);
	fputs("���\n", fp);


	fclose(fp); // ���� �ݱ�


	return 0;
}