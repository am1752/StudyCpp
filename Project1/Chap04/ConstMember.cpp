#include<stdio.h>
#include<iostream>

using namespace std;

class MathCalc {
private:
	const double pie;
public:
	MathCalc(double apie) : pie(apie) { ; }//pie�� �ܽ�Ʈ �̹Ƿ� ���� �ٲ� �� ������ ������ �̷��ķ� �Ѵ�.
	void DoCalc(double r) {
		printf("������ %.2f�� ���� �ѷ� = %.8f\n",r,2*r*pie);
	}
};

void main() {
	MathCalc m(3.141592);
	m.DoCalc(5.2);
}