#include <iostream>
using namespace std;
#include "Bubble.h"
void addBubble(Bubble& c, Bubble a, Bubble b) {
	c.setRadius(c.getRadius() + a.getRadius() + b.getRadius());
}
int main() {
	Bubble a(5), b(10), c(130);
	addBubble(c, a, b);
	cout << "버블 c의 반지름 " << c.getRadius() << endl;
}