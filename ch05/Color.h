#ifndef COLOR_H
#define COLOR_H
#include <iostream>
using namespace std;

class Color {
	int r, g, b;
public:
	Color(int r, int g, int b);
	void get(int& r, int& g, int& b);
};
#endif