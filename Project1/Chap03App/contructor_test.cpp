#include<stdio.h>
#include<string.h>
class Human {
private:
	char name[12];
	int age;
	
public:
	// ������
	Human(const char* name, int age) {
		strcpy(this->name, name);
		this->age = age; //this�� �ڽ��� ��Ÿ��
	}
	void intro() {
		printf("�̸� = %s, ���� = %d\n", this->name,this-> age);
	}
};

void main() {
	Human h = Human("��ä��", 27);
	h.intro();
}