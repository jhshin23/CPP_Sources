#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
using namespace std;

class Vector {
	int* mem;
	int size;
public:
	//(1) 답
	//Vector();
	//Vector(int memSize, int initValue);
	//void show();
	//void show(int headSize);
	//(2) 답
	Vector(int memSize = 5, int initValue = 0);
	void show(int headSize = -1);

	~Vector();
};

#endif
