#include<iostream>
#include<stdio.h>
#include "Time.h"
#include "Date.h"

using namespace std;

void main() {
	Date now;
	Time now1;

	now.SetDate(20, 04, 21);
	now.OutDate();
	
	now1.SetTime(04, 01, 20);
	now1.OutTime();
}