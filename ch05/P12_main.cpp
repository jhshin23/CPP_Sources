#include "MyPipe.h"

int main() {
	MyPipe a(5);
	a.put(10);
	a.put(20);

	MyPipe b = a;
	b.put(30);
	cout << "파이프 a에 저장된 개수: " << a.getSize() << endl;
	cout << "파이프 b에 저장된 개수: " << b.getSize() << endl;

	int n;
	a.get(n);
	cout << "파이프 a에서 빼온 값 " << n << endl;

	b.get(n);
	cout << "파이프 b에서 빼온 값 " << n << endl;
}

//2026/04/17 14:50 ~ 15:00, 10분