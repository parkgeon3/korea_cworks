//#include <stdio.h>
//#include <time.h>
//#include <Windows.h>// Sleep()
//
////�ð� �Լ� - time()
//int main_Time()
//{
//	time_t now;	   //time_t �ڷ���
//	//now = time(NULL);
//	time(&now); //now�� �ּҸ� �Ű������� ����
//	
//
//	//ld-ling decimal
//	printf("1970�� 1�� 1��(0�� 0�� 0��) ���� %ld��\n", now);
//	//�Ϸ� ȯ��
//	printf("1970�� 1�� 1��(0�� 0�� 0��) ���� %ld��\n", now/(24*60*60));
//	//������ ȯ��
//	printf("1970�� 1�� 1��(0�� 0�� 0��) ���� %ld��\n", now/(365 * 24 * 60 * 60));
//
//	// ����ð�
//	//1 ~ 10���� ���(for��) - 1�� ���ð� : sleep(1000) 1�� - 1000
//	time_t start, end;
//	time(&start);
//	
//	for (int i = 1; i <= 10; i ++)
//	{
//		printf("%d\n", i);
//		Sleep(500);
//	}
//	time(&end);
//	printf("����ð� : %ld��\n", (end - start));
//	return 0;
//}