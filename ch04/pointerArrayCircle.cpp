#include <iostream>
#include "pointerArrayCircle.h"

using namespace std;

double Circle::getArea() {
	return 3.14 * radius * radius;
}
void Circle::setArea(int r) {
	radius = r;
}
 
void CircleManager::input() {
	cout << "원의 개수?";
	cin >> n;
	p = new Circle[n];
	if (!p) {
		cout << "할당 실패";
		exit(0);
	}
	for (int i = 0; i < n; i++) {
		cout << "원" << (i + 1) << ": ";
		int radius;
		cin >> radius;
		p[i].setArea(radius);
	}
}

void CircleManager::show() {
	for (int i = 0; i < n; i++) {
		cout << p[i].getArea() << "\t";
	}
	cout << endl;
}
void CircleManager::decide() {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		double d = p[i].getArea();
		if (d > 100 && d < 200) {
			cout << d << "\t";
			cnt++;
		}
	}
	cout << endl;
	cout << cnt << "개" << endl;
}

void CircleManager::run() {
	input();
	show();
	decide();
}