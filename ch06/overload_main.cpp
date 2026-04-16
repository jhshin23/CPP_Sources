#include <iostream>
using namespace std;
//void star();
void star(int n);

//void star() {
//	for (int i = 0; i < 10; i++) {
//		cout << '*';
//	}
//	cout << endl;
//}

void star(int n = 10) { //디폴트 매개변수
	for (int i = 0; i < n; i++) {
		cout << '*';
	}
	cout << endl;
}

int main() {
	star(5);
}