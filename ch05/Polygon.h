#ifndef POLYGON_H
#define POLYGON_H
class Polygon {
	int size = 0; //점의 개수. 초기 값 0
	int* xList, * yList; //점들의 x와 y값 배열
public:
	Polygon(int size); //생성자. size는 점의 개수
	~Polygon(); //소멸자
	void read();
	bool get(int n, int& x, int& y);
};
#endif