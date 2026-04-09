#include <iostream>
using namespace std;

int main() {
	int n = 5;
	int* p = &n;
	int& ref = n;
	ref++; 
	n = 20;

	p = &ref;

	cout << n << ',' << ref << ',' << *p << endl; //n==ref==*p
}