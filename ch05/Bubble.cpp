#include <iostream>
using namespace std;
#include "Bubble.h"

Bubble& Bubble::addBubble(Bubble y) {
	radius += y.getRadius();
	return *this; 
}
