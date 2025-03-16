//#include <stdio.h>
//
//int main()
//{
//
//	FILE* fp;
//	int ch;
//	char buffer[256]; // 읽반 데이터를 저장할 배열
//	//fp = fopen("ascii.txt", "r");
//	fopen_s(&fp, "ascii.txt", "r"); // _CRT_SECURE_NO_WARNINGS 불필요
//	if (fp == NULL)
//	{
//		printf("파일 열기에 실패함\n");
//		return -1;
//	}
//
//	//파일 읽기 - fgetc()
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
//	//exe 파일 닫히지 않도록 함
//	system("pause");
//
//	return 0;
//}