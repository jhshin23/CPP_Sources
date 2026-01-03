#include <iostream>
using namespace std;
#define START_NUMBER 1
#define END_NUMBER 9

int main() {
	for (int i = START_NUMBER; i <= END_NUMBER; i++) {
		for (int j = START_NUMBER; j <= END_NUMBER; j++) {
			cout << j << "*" << i << "=" << i * j << "\t";
		}
		cout << "\n";
	}
}