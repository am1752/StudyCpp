#include<stdio.h>
#include "Date.h"

void Date::SetDate(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

void Date::OutDate() {
	printf("������ %02d�� %02d�� %02d�� �Դϴ�.\n", year, month, day);
}