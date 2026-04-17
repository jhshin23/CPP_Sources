#include <iostream>
using namespace std;
void twice(int& n);

void twice(int& n) {
	n *= 2;
}

int main() {
	int n = 12;
	twice(n);
	cout << n;
}
//2026/04/17 10:42~45, 3분