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
		cout<<this->name<<"��ü �����ڰ� ȣ�� �Ǿ����ϴ�.\n";
	}
	~Human() { //��ü�� ���ֹ�����
		cout<<this->name<<"��ü�� �ı��Ǿ����ϴ�.\n";
		delete[] this->name;
	}

	void intro() {
		cout << "�̸� = " << this->name << " ,���� = " << this->age << endl;
	}
};

void main() {
	Human woman("��ä��", 27);
	woman.intro();
}