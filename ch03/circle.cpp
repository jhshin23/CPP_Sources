#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	double getArea();
	int getRadius();
	Circle();
	Circle(int r);
	~Circle();
};

Circle earth(100000); 

//멤버 함수(<->글로벌 함수) 구현부
double Circle::getArea() { 
	return 3.14 * radius * radius;
}
int Circle::getRadius() {
	return radius;
}
Circle::Circle() {
	radius = 1;//가비지 값이 들어가지 않게 초기화, 생성자함수 오버로드 시 컴파일러가 기본생성자 안 만들어주는 이유
	cout << "반지름은 " << getRadius() << "입니다" << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "반지름은 " << radius << " 입니다" << endl;
}
Circle::~Circle() {
	cout << "반지름 " << radius << " 안녕" << endl;
}

void f() {

	cout << "둥근 것들" << endl;

	int r;
	Circle donut;
	double area = donut.getArea();
	cout << "도넛 넓이 " << area << endl;

	Circle pizza(3);
	cout << "피자 넓이 " << pizza.getArea() << endl;
	cout << "다 먹음" << endl;

}

int main() {
	f();

}