#ifndef MYPIPE_H
#define MYPIPE_H
#include <iostream>
using namespace std;

class MyPipe {
	int size = 0;
	int putIndex = 0;
	//P10 용
	//int p[5];
	int* p;
public:
	MyPipe(int size = 5);
	MyPipe(const MyPipe& src);
	~MyPipe();
	bool put(int n);
	bool get(int& n);

	int getSize() {
		return putIndex;
	}
};
#endif