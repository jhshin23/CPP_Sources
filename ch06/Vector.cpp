#include "Vector.h"
using namespace std;

//(1) 답
//Vector::Vector() {
//	this->size = 5;
//	this->mem = new int[size];
//	for (int i = 0; i < size; i++)
//		mem[i] = 0;
//}
//
//Vector::Vector(int memSize, int initValue) {
//	this->size = memSize;
//	this->mem = new int[size];
//	for (int i = 0; i < size; i++)
//		mem[i] = initValue;
//}

//void Vector::show() {
//	for (int i = 0; i < size; i++)
//		cout << mem[i] << ' ';
//	cout << endl;
//}
//
//void Vector::show(int headSize) {
//	if (headSize > size) return;
//	for (int i = 0; i < headSize; i++)
//		cout << mem[i] << ' ';
//	cout << endl;
//}

//(2) 답
Vector::Vector(int memSize, int initValue) {
	this->size = memSize;
	this->mem = new int[size];
	for (int i = 0; i < size; i++)
		mem[i] = initValue;
}

void Vector::show(int headSize) {
	if (headSize > size) return;
	if (headSize == -1) 
		headSize = size;
	for (int i = 0; i < headSize; i++)
		cout << mem[i] << ' ';
	cout << endl;
}

Vector::~Vector() {
	delete[] mem;
}