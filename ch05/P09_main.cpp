#include "MyStack.h"

int main() {
	MyStack st;
	for (int i = 0; i < 11; i++) {
		if (st.push(i))
			cout << i << ' ';
		else 
			cout << endl << i + 1 << "번째 푸시 실패! 스택 차 있음" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (st.pop(n))
			cout << n << ' ';
		else 
			cout << endl << i + 1 << "번째 팝 실패! 스택 비어 있음" << endl;
	}

}

//2026/04/17 13:00~15, 15분