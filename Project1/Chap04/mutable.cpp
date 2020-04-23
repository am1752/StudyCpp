#include<stdio.h>
#include<iostream>
using namespace std;

class Some {
private:
	mutable int temp;
public:
	Some() { temp = 1; }
	void method() const { temp = NULL; }
	void print() const { cout << temp << endl; }
};

void main() {
	Some s;
	s.method();
	s.print();

	const Some t;
	t.method();
	t.print();
}