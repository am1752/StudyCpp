#include<iostream>
using namespace std;

class Time {
	friend ostream& operator << (ostream& c, const Time& T);
	friend ostream& operator << (ostream& c, const Time* pT);
private:
	int hour, min, sec;

public:
	Time() { ; }
	Time(int h,int m,int s){
		hour = h;
		min = m;
		sec = s;
	}

	void OutTime() const {
		cout << hour << " : " << min << " : " << sec << endl;
	}
};

ostream& operator << (ostream& c, const Time& T) {
	c << T.hour << " : " << T.min << " : " << T.sec;
	return c;
}
ostream& operator << (ostream& c, const Time* pT) {
	c << pT->hour << " : " << pT->min << " : " << pT->sec;
	return c;
}


void main() {
	Time now(10, 20, 5);
	Time* pLunchTime = new Time(10, 30, 0);

	cout << "���� �ð��� " << now << endl;
	cout << "���� �ð��� " << pLunchTime << " �Դϴ�." << endl;
}