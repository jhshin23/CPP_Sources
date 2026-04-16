#include <iostream>
using namespace std;
//void printMatrix();
void printMatrix(int a = 2, int b = 2, char c = '*');
//void printMatrix(int a, int b);
//(1) 답
//void printMatrix() {
//	int cols = 2, rows = 2;
//	char c = '*';
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols;j++) {
//			cout << c;
//		}
//		cout << endl;
//	}
//}
//void printMatrix(int a, int b, char c) {
//	int rows = a, cols = b;
//	char cc = c;
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols;j++) {
//			cout << cc;
//		}
//		cout << endl;
//	}
//}
//void printMatrix(int a, int b) {
//	int rows = a, cols = b;
//	char c = '*';
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols;j++) {
//			cout << c;
//		}
//		cout << endl;
//	}
//}

//(2) 답
void printMatrix(int a, int b, char c) {
	int rows = a, cols = b;
	char cc = c;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols;j++) {
			cout << cc;
		}
		cout << endl;
	}
}

int main() {
	printMatrix();
	printMatrix(2, 5, 'a');
	printMatrix(1, 10);
}

//2026/04/16 14:40~15:00 20분