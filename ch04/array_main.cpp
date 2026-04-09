#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; };
	double getArea();

}; 

double Circle::getArea() {
	return 3.14 * radius * radius;
}

void print(Circle* p) {
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;
}

int main() {
	Circle circles[3] = { Circle(1), Circle(5) , Circle() };
	for (int i = 0; i < 3; i++) {
		cout << circles[i].getArea() << "\t";
	}
	cout << endl;
	
	Circle* p = circles;
	for (int i = 0; i < 3; i++) {
//		p = &circles[i];
		cout << p->getArea() << "\t";
		cout << (*p).getArea() << "\t";
		cout << p << "\t";
		p++;//4byte 크기
	}

	//Circle donut(5), pizza(30);
	//p = &donut;
	//cout << donut.getArea() << ',' << p->getArea() << endl;
	//cout << (*p).getArea() << ',' << (&donut)->getArea() << endl;
	//print(&donut);
	//print(&pizza);

}