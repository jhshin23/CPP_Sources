#ifndef BUBBLE_H
#define BUBBLE_H

class Bubble {
	int radius;
public:
	Bubble(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int n) { radius = n; }
	Bubble& addBubble(Bubble y);
	 
};
#endif

