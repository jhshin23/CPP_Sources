#ifndef COLLECTOR_H
#define COLLECTOR_H
#include <iostream>
using namespace std;

class Collector {
	int* p;
	int size = 0;
public:
	Collector(int size, int values[]);
	Collector(const Collector& src);
	~Collector() {
		delete[] p;
	}
	
	void show();
	int getSize() {
		return size;
	}
	int get(int index) {
		return p[index];
	}
};
#endif