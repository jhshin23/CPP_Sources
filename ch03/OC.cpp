//chap03, Open Challenge, page142
#include <iostream>
using namespace std;
#include "Exp.h"

int main() {
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a의 베이스 " << a.getBase() << ',' << "지수" << a.getExp() << endl;
	
	if (a.equals(Exp(3, 2)))
		cout << "same" << endl;
	else
		xcout << "not same" << endl;
} 