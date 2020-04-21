#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

class Human {
private:
	char* name;
	int age;

public:
	Human(const char* name, int age) {
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
		cout<<this->name<<"객체 생성자가 호출 되었습니다.\n";
	}
	~Human() { //객체를 없애버리기
		cout<<this->name<<"객체가 파괴되었습니다.\n";
		delete[] this->name;
	}

	void intro() {
		cout << "이름 = " << this->name << " ,나이 = " << this->age << endl;
	}
};

void main() {
	Human woman("이채은", 27);
	woman.intro();
}