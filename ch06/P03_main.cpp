#include <iostream>
#include <string>
using namespace std;

//(1) 답
bool equals(string a, string b);
bool equals(string a, string b, int subSize);
bool equals(string a, string b, int subSize, string c);
//(2) 답
//bool equals(string a, string b, int subSize = 0, string c = "");

//(1) 답
bool equals(string a, string b) {
	return a == b;
}
bool equals(string a, string b, int subSize) {
	return a.substr(0, subSize) == b.substr(0, subSize);
}
bool equals(string a, string b, int subSize, string c) {
	return (a.substr(0, subSize) == b.substr(0, subSize)) && (a.substr(0, subSize) == c.substr(0, subSize));
}
//(2) 답
//bool equals(string a, string b, int subSize, string c) {
//	if (c.empty()) c = a;
//	if (subSize == 0) {
//		return (a == b) && (a == c);
//	}
//	else {
//		return ((a.substr(0, subSize) == b.substr(0, subSize)) && (a.substr(0, subSize) == c.substr(0, subSize)));
//	}
//}

int main() {
	string x = "Prof. Hwang";
	string y = "Prof. Kim";
	string z = "Prof. Lee";
	if (equals(x, y)) cout << "같음" << endl;
	if (equals(x, y, 3)) cout << "앞 3글자 같음" << endl;
	if (equals(x, y, 5, z)) cout << "앞 5글자 같음" << endl;
}

//2026/04/16 15:00~40 40분