//#include <stdio.h>
//
//int main()
//{
//
//	FILE* fp;
//	int ch;
//	char buffer[256]; // �й� �����͸� ������ �迭
//	//fp = fopen("ascii.txt", "r");
//	fopen_s(&fp, "ascii.txt", "r"); // _CRT_SECURE_NO_WARNINGS ���ʿ�
//	if (fp == NULL)
//	{
//		printf("���� ���⿡ ������\n");
//		return -1;
//	}
//
//	//���� �б� - fgetc()
//
//
//
//	//while (1)
//	//{
//
//	//	ch = fgetc(fp);
//	//	if (ch == EOF)
//	//		break;
//	//	printf("%c", ch);
//	//}
//	//while ((ch = fgetc(fp)) != EOF)
//	//{
//	//	printf("%c", ch);
//	//}
//
//	// fgets()
//	while (fgets(buffer, sizeof(buffer), fp) != NULL)
//	{
//		printf("%s", buffer);
//	}
//
//	fclose(fp);
//
//	//exe ���� ������ �ʵ��� ��
//	system("pause");
//
//	return 0;
//}