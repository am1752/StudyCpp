#include<stdio.h>
#include "Date.h"

void Date::SetDate(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

void Date::OutDate() {
	printf("오늘은 %02d년 %02d월 %02d일 입니다.\n", year, month, day);
}