#include<iostream>
#include<string.h>

using namespace std;

class Human
{
	public:
		char name[10];
		int age;

	void intro() {
		cout << "이름 = " << name << ", 나이 = " << age << endl;
	}
};

void main() {
	int a;
	char *b;
	cin>>b>>a;
	Human arFriend[10] = {
		{"문동욱",49},
		{"김유진",45},{"이채은",a} };
	
	Human* pFriend;
	pFriend = &arFriend[1];

	pFriend->intro();
}