#include<iostream>
#include<string.h>

using namespace std;

class Human
{
	public:
		char name[10];
		int age;

	void intro() {
		cout << "�̸� = " << name << ", ���� = " << age << endl;
	}
};

void main() {
	int a;
	char *b;
	cin>>b>>a;
	Human arFriend[10] = {
		{"������",49},
		{"������",45},{"��ä��",a} };
	
	Human* pFriend;
	pFriend = &arFriend[1];

	pFriend->intro();
}