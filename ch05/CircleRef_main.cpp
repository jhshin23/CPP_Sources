#include <iostream>
using namespace std;
#include "CircleRef.h"

int main() {
	Circle a(5);
	a.plus(1).plus(5).plus(200);
	cout << a.getRadius() << endl;

	string x("Hello"); 
	x.append("JH").append("!"); 
	cout << x;
}