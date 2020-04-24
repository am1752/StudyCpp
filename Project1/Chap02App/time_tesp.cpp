#include<stdio.h>
#include<iostream>
#include "Time.h"

using namespace std;

void Time::SetTime(int h, int m, int s) {
	hour = h;
	min = m;
	sec = s;
}

void Time::OutTime() {
	printf("현재시각은 %02d: %02d: %02d 입니다.\n", hour,min,sec);
}


