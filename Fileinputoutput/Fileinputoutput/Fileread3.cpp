#include <stdio.h>

//���� �б�
int main()
{
	//���� �ܾ� �����ϱ�
	FILE* fp;
	char buffer[256]; //�ܾ ������ �迭

	fopen_s(&fp, "words.txt", "r");
	if (fp == NULL)
	{
		printf("���� ���⿡ ������\n");
		return -1;
	}

	//fgers()�� �о����
	while (fgets(buffer, sizeof(buffer), fp) != NULL)
	{
		printf("%s", buffer);
	}

	fclose(fp);

	return 0;
}