#include "MyPipe.h"

int main() {
	MyPipe pipe;
	for (int i = 0; i < 6; i++) {
		if (pipe.put(i))
			cout << i << ' ';
		else
			cout << endl << i + 1 << "번째 put 실패! 파이프 꽉참" << endl;
	}
	cout << "현재 파이프 크기 : " << pipe.getSize() << endl;

	int n;

	for (int i = 0; i < 6; i++) {
		if (pipe.get(n))
			cout << n << ' ';
		else
			cout << endl << i + 1 << "번째 get 실패! 파이프 비어 있음" << endl;
	}
	cout << "현재 파이프 크기 : " << pipe.getSize() << endl;

}

//2026/04/17 13:20~40, 20분