#ifndef MYSTACK_H
#define MYSTACK_H
#include <iostream>
using namespace std;

class MyStack {
	int* p;
	//P09 용
	//int p[10];
	int tos = 0;
	int size;
public:
	MyStack(int size);
	MyStack(const MyStack& src);
	~MyStack();
	bool push(int n);
	bool pop(int& n);
};
#endif