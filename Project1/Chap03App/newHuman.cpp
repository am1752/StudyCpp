#include<iostream>
#include<string.h>
using namespace std;

class Human {
private:
	char* name;
	int age;

public:
	Human(const char* aname, int aage) {
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
		age = aage;
		cout << name << "��ü �����ڰ� ȣ�� �Ǿ����ϴ�.\n";
	}
	~Human() { //��ü�� ���ֹ�����
		cout << name << "��ü�� �ı��Ǿ����ϴ�.\n";
		delete[] name;
	}

	void intro() {
		cout << "�̸� = " << name << " ,���� = " << age << endl;
	}
};

void main() {
	Human boy("����ѹ��ź��̿͵η��", 12);
	boy.intro();
	
	Human *leo;
	leo = new Human("���������� ��ī������", 47);
	leo->intro();
	delete leo;
	
}