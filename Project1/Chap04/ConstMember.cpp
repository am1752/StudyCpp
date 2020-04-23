#include<stdio.h>
#include<iostream>

using namespace std;

class MathCalc {
private:
	const double pie;
public:
	MathCalc(double apie) : pie(apie) { ; }//pie가 콘스트 이므로 값이 바뀔 수 없으로 대입을 이런식로 한다.
	void DoCalc(double r) {
		printf("반지름 %.2f인 원의 둘레 = %.8f\n",r,2*r*pie);
	}
};

void main() {
	MathCalc m(3.141592);
	m.DoCalc(5.2);
}