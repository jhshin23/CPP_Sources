#include "MyStack.h"

int main() {
	MyStack a(10);
	a.push(10);
	a.push(20);
	
	MyStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;

	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;

}


//2026/04/17 13:45 ~ 14:45, 1시간