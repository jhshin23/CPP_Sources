#include <iostream>
using namespace std;
//int add(int a[], int b);
//int add(int a[], int b, int c);
int add(int a[], int b, int c = 0);
//(1)번 답
//int add(int a[], int b) {
//	int sum = 0;
//	for (int i = 0; i < b; i++)
//		sum += a[i];
//	return sum;
//}
//int add(int a[], int b, int c = 0) {
//	int sum = c;
//	for (int i = 0; i < b; i++)
//		sum += a[i];
//	return sum;
//}
//(2)번 답
int add(int a[], int b, int c) {
int sum = c;
	for (int i = 0; i < b; i++)
		sum += a[i];
	return sum;
}

int main() {
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 10 };
	int c = add(a, 5);
	int d = add(b, 3, c);

	cout << c << endl;
	cout << d << endl;
}

//20260416 14:30~40