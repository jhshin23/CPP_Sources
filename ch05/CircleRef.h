#ifndef CIRCLEREF_H
#define CIRCLEREF_H

class Circle {
	int radius;
public:
	Circle(int radius) { this->radius = radius; }
	Circle& plus(int n); 
	int getRadius() { return radius; }
};

#endif