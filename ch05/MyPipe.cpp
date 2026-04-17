#include "MyPipe.h"

MyPipe::MyPipe(int size) {
	this->size = size;
	p = new int[size];
}
MyPipe::MyPipe(const MyPipe& src) {
	this->putIndex = src.putIndex;
	this->size = src.size;
	this->p = new int[size];
	for (int i = 0; i < this->putIndex; i++) {
		this->p[i] = src.p[i];
	}

}
MyPipe::~MyPipe() {

}

bool MyPipe::put(int n) {
	if (putIndex >= size)
		return false;
	else {
		p[putIndex] = n;
		putIndex++;
		return true;
	}
}
bool MyPipe::get(int& n) {
	if (putIndex <= 0)
		return false;
	else {
		n = p[0];
		for (int i = 0; i < (putIndex-1); i++) {
			p[i] = p[i + 1];
		}
		putIndex--;
		return true;
	}
}
