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
	printf("����ð��� %02d: %02d: %02d �Դϴ�.\n", hour,min,sec);
}


