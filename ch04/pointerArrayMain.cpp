#include <iostream>
#include "pointerArrayCircle.h"

using namespace std;

int main() {
	CircleManager* pMan = new CircleManager();
	pMan->run();
	delete pMan;
} 