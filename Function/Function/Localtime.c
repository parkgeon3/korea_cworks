//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//
//
////��¥�� �ð� ���
//int main_Localtime()
//{
//	//���� �ð��� �˱����� time_t ���� ����
//	time_t ct;
//	struct tm* now; //tm ����ü�� ��ü ����
//	time(&ct);
//	now = localtime(&ct);// ��¥ ����
//
//	//��¥ �ð� ���
//	printf("���� �⵵: %d\n", now->tm_year + 1900);
//	printf("���� ��: %d\n", now->tm_mon + 1);
//	printf("���� ��: %d\n", now->tm_mday);
//	printf("���� ��¥: %d. %d. %d.\n",
//		now->tm_year + 1900, now->tm_mon + 1, now->tm_mday);
//	printf("���� ��: %d\n", now->tm_hour);
//	printf("���� ��: %d\n", now->tm_min);
//	printf("���� ��: %d\n", now->tm_sec);
//	printf("���� �ð�: %d : %d : %d\n", 
//		now->tm_hour, now->tm_min, now->tm_sec);
//
//
//
//	//���� ���� 0-�� , 1-�� , 2-ȭ , 3-�� , 4-�� , 5-�� , 6-��
//	printf("���� ����: %d\n", now->tm_wday);
//
//	//���� ���(���ǹ� - if, swich)
//	if (now->tm_wday == 0) {
//		printf("������ �Ͽ����Դϴ�");
//	}else if (now == 1) {
//		printf("������ �������Դϴ�");
//	}else if (now == 2) {
//		printf("������ ȭ�����Դϴ�");
//	}else if (now == 3) {
//		printf("������ �������Դϴ�");
//	}else if (now == 4) {
//		printf("������ ������Դϴ�");
//	}else if (now == 5) {
//		printf("������ �ݿ����Դϴ�");
//	}else {
//		printf("������ ������Դϴ�");
//	}
//	switch (now->tm_wday) 
//	{
//	/*	case0
//	}
//	return 0;*/
//}