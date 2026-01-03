#include <iostream>
using namespace std;

int main() {
	cout << "두 수를 입력하라>>";
	int a, b, larger;
	cin >> a >> b;
	if (a == b) {
		cout << "두 수가 같음";
		return 0;
	}
	else {
		larger = (a > b) ? a : b;
	}
	cout << "큰 수 = " << larger;
}