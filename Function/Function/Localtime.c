//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//
//
////날짜와 시간 출력
//int main_Localtime()
//{
//	//현재 시간을 알기위한 time_t 변수 생성
//	time_t ct;
//	struct tm* now; //tm 구조체의 객체 생성
//	time(&ct);
//	now = localtime(&ct);// 날짜 포맷
//
//	//날짜 시간 출력
//	printf("현재 년도: %d\n", now->tm_year + 1900);
//	printf("현재 월: %d\n", now->tm_mon + 1);
//	printf("현재 일: %d\n", now->tm_mday);
//	printf("현재 날짜: %d. %d. %d.\n",
//		now->tm_year + 1900, now->tm_mon + 1, now->tm_mday);
//	printf("현재 시: %d\n", now->tm_hour);
//	printf("현재 분: %d\n", now->tm_min);
//	printf("현재 초: %d\n", now->tm_sec);
//	printf("현재 시간: %d : %d : %d\n", 
//		now->tm_hour, now->tm_min, now->tm_sec);
//
//
//
//	//현재 요일 0-일 , 1-월 , 2-화 , 3-수 , 4-목 , 5-금 , 6-토
//	printf("현재 요일: %d\n", now->tm_wday);
//
//	//요일 출력(조건문 - if, swich)
//	if (now->tm_wday == 0) {
//		printf("오늘은 일요일입니다");
//	}else if (now == 1) {
//		printf("오늘은 월요일입니다");
//	}else if (now == 2) {
//		printf("오늘은 화요일입니다");
//	}else if (now == 3) {
//		printf("오늘은 수요일입니다");
//	}else if (now == 4) {
//		printf("오늘은 목요일입니다");
//	}else if (now == 5) {
//		printf("오늘은 금요일입니다");
//	}else {
//		printf("오늘은 토요일입니다");
//	}
//	switch (now->tm_wday) 
//	{
//	/*	case0
//	}
//	return 0;*/
//}