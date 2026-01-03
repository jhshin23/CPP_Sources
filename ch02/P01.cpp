#include <iostream>
using namespace std;
#define LIMIT 100
#define LINE 10

int main() {
	for (int i = 1; i < LIMIT; i+= LINE) { //1 11 ... 91
		for (int j = i ; j < i+ LINE; j++) //i i+1 ... i-1+10
			cout << j << "\t";
		cout << "\n";
	}
}