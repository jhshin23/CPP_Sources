#include <iostream>
using namespace std;
#include "Average.h"

int main() { 
	int x[] = {0, 1, 2, 3, 4, 5};
	int avg;
	bool res = average(x, 6, avg);
	if (res) {
	    cout << avg << endl;
	}
	else {
		cout << "사이즈 오류" << endl;
	}
}