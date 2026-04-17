#ifndef POWER_H
#define POWER_H
#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick, int punch);
	Power& add(Power p);
	void show() {
		cout << "kick=" << kick << ", " << "punch=" << punch << endl;
	}
};

#endif