#include <stdio.h>

class Some
{
public:
	int total;
	//Some(int atotal) : total(atotal) { } 
	//total이 const일 경우에도 가능
	Some(int atotal) {
		total = atotal;
	}//total이 const일 경우 불가
	void OutTotal() { printf("%d\n", total); }
};

int main()
{
	Some S(5);
	S.OutTotal();
}
