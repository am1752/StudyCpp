#include <stdio.h>

class Some
{
public:
	int total;
	//Some(int atotal) : total(atotal) { } 
	//total�� const�� ��쿡�� ����
	Some(int atotal) {
		total = atotal;
	}//total�� const�� ��� �Ұ�
	void OutTotal() { printf("%d\n", total); }
};

int main()
{
	Some S(5);
	S.OutTotal();
}
