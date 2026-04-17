#include <iostream>
using namespace std;
bool compare(int a, int b, int& min, int& max);

bool compare(int a, int b, int& min, int& max) {
	min = (a >= b) ? b : a;
	max = (a >= b) ? a : b;

	return a == b;
}

int main() {
	int a, b, min, max;
	cout << "두 수 입력>>";
	cin >> a >> b;
	bool res = compare(a, b, min, max);
	if (res == true)
		cout << "두 수는 같습니다.";
	else
		cout << "작은 수는 " << min << ", 큰 수는 " << max;
}

//2026/04/17 10:45~55, 10분