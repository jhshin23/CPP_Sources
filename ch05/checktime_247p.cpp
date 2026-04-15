#include <iostream>
using namespace std;
void f(int a);
void g(int *a);
void h(int &a);
int& refFunc(int n);
int ar[] = { 0, 1, 3, 5, 7 };

void f(int a) {
	a = -a;
}
void g(int* a) {
	*a = -*a;
}
void h(int& a) {
	a = -a;
}

int& refFunc(int n) {
	return ar[n];
}



int main() {
	//int n = 5;
	//f(n);
	//cout << n << endl;

	//n = 5;
	//g(&n);
	//cout << n << endl;

	//n = 5;
	//h(n);
	//cout << n << endl;

	//refFunc(0) = 100;

	//refFunc(0) = refFunc(1) + refFunc(2) + refFunc(3) + refFunc(4);

	int& v = refFunc(2);
	v++;

	for (int i = 0; i < 5; i++)
		cout << ar[i] << "\t";
}