#include<iostream>
#include<stdio.h>

#include<stdio.h>
#include<iostream>

using namespace std;

class Time {
private:
	int hour, min, sec;
public:
	Time() { ; }
	Time(int h, int m, int s) :hour(h), min(m), sec(s) { ; }
	void OutTime() {
		cout << hour << " : " << min << " : " << sec << endl;
	}
	//앞 콘스트는 리턴갑 고정, 함수 뒤 콘스트는 클래스 내 멤버변수 고정
	const Time operator + (const Time& other) const {
		Time t;
		t.sec = sec + other.sec;
		t.min = min + other.min;
		t.hour = hour + other.hour;

		t.min += t.sec / 60;
		t.sec %= 60;
		t.hour += t.min / 60;
		t.min %= 60;
		return t;
	}
};

void main() {
	Time t1(1, 10, 30);
	Time t2(2, 20, 40);
	Time t3;

	t3 = t1+t2;
	t3.OutTime();
}