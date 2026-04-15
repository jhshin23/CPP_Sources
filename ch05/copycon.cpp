#include <iostream>
using namespace std;
//7주차에서 수정
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	Circle(const Circle& c); //const없어도 오류는 안 남,근데 call by reference라서 원본 수정가능
	double gerArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
};
Circle::Circle(const Circle& c) {
	this->radius = c.radius;
	cout << "복사생성자 호출됨" << endl;
}

int main() {
	Circle src(30);
	Circle dest(src); //Circle dest = src;는 초기화라서 복사생성자 호출됨

	cout << src.gerArea() << endl;
	cout << dest.gerArea() << endl;

}