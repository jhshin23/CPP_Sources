#include <iostream>
using namespace std;
#include "Bubble.h"

int main() {
	Bubble a(5), b(10), c(130);
	c.addBubble(a).addBubble(b).addBubble(Bubble(200));
	cout << c.getRadius() << endl; 
} 