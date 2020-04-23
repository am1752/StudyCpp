#include<stdio.h>
#include<iostream>

using namespace std;

enum Color
{
	Black,
	White,
	Red,
	Green,
	Blue,
	Aqua
};

class Test {
private:
	Color mycol;
public:
	Test() {
		mycol = Color(5);
	}
	void OutColor() {
		cout << mycol;
	}
};

void main() {
	Test t;
	t.OutColor();
}