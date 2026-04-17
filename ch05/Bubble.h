#ifndef BUBBLE_H
#define BUBBLE_H
#include <iostream>
using namespace std;

class Bubble {
	int radius;
public:
	Bubble(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int n) { radius = n; }
};
#endif

