#include <iostream>
using namespace std;

void pr(int a, int b) {
	cout << a << ',' << b << endl;
}

//void swap(int* a, int* b) {
//	int tmp;
//	tmp = *a; 
//	*a = *b;
//	*b = tmp;
//}

//void swap(int a, int b) {
//	int tmp;
//	tmp = a;
//	a = b;
//	b = tmp; 
//}

void swap(int *&a, int *&b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

//int main() {
//	int a = 2, b = 9;
//	swap(a, b);
//	pr(a, b);
//	swap(&a, &b);
//	pr(a, b);
//}