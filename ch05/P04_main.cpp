#include "Bubble.h"
void addBubble(Bubble& c, Bubble a, Bubble b);
bool combineBubble(Bubble& a, Bubble& b);

void addBubble(Bubble& c, Bubble a, Bubble b) {
	c.setRadius(c.getRadius() + a.getRadius() + b.getRadius());
}

bool combineBubble(Bubble& a, Bubble& b) {
	int ar = a.getRadius();
	int br = b.getRadius();
	bool isDiff = ar != br;
	
	if (isDiff) {
		if (ar > br) {
			a.setRadius(ar + br);
			b.setRadius(0);
		}
		else {
			a.setRadius(0);
			b.setRadius(ar + br);
		}
	}

	return isDiff;
}

int main() {
	Bubble a(5), b(10);
	if (combineBubble(a, b) == false) {
		cout << "두 버블의 크기가 같음" << endl;
	}
	else {
		cout << "큰 쪽으로 병합됨" << endl;
	}

	cout << "버블 a의 반지름" << a.getRadius() << endl;
	cout << "버블 b의 반지름" << b.getRadius() << endl;
}

//2026/04/17 11:05~11:35, 12:15~30, 45분