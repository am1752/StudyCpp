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
		cout << name << "객체 생성자가 호출 되었습니다.\n";
	}
	~Human() { //객체를 없애버리기
		cout << name << "객체가 파괴되었습니다.\n";
		delete[] name;
	}

	void intro() {
		cout << "이름 = " << name << " ,나이 = " << age << endl;
	}
};

void main() {
	Human boy("김수한무거북이와두루미", 12);
	boy.intro();
	
	Human *leo;
	leo = new Human("레오나르도 디카프리오", 47);
	leo->intro();
	delete leo;
	
}