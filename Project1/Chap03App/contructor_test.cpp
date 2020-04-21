#include<stdio.h>
#include<string.h>
class Human {
private:
	char name[12];
	int age;
	
public:
	// 생성자
	Human(const char* name, int age) {
		strcpy(this->name, name);
		this->age = age; //this는 자신을 나타냄
	}
	void intro() {
		printf("이름 = %s, 나이 = %d\n", this->name,this-> age);
	}
};

void main() {
	Human h = Human("이채은", 27);
	h.intro();
}