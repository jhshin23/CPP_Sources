#include "MyStack.h"

MyStack::MyStack(int size = 10) {
	this->size = size;
	p = new int[size];
}
MyStack::MyStack(const MyStack& src) {
	this->tos = src.tos;
	this->size = src.size;
	this->p = new int[this->size];
	for (int i = 0; i < this->tos; i++) {
		*(this->p + i) = *(src.p + i);
	}
}
MyStack::~MyStack() {
	delete[] p;
}

bool MyStack::push(int n) {
	if (tos >= size) return false;
	else {
		p[tos] = n;
		tos++;
		return true;
	}
}
bool MyStack::pop(int& n) {
	if (tos <= 0) return false;
	else {
		tos--;
		n = p[tos];
		return true;
	}
}