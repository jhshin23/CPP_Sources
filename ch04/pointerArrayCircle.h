#ifndef POINTERARRAYCIRCLE_H
#define POINTERARRAYCIRCLE_H
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; };
	double getArea();
	void setArea(int r);
}; 
class CircleManager {
	int n;//원의 개수
	Circle* p;//Circle 배열에 대한 포인터
	void input();
	void decide();
	void show();
public:
	void run();
};

#endif POINTERARRAYCIRCLE_H

