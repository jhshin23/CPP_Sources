#include <iostream>
using namespace std;
#include "CircleRef.h"

Circle& Circle::plus(int n) {
	radius += n; 
	return *this; 
}

