#include <iostream>
using namespace std;
//(1) 답
//string erase(string src);
//string erase(string src, string rm);
//string erase(string src, string target, string replace);
//(2) 답
string erase(string src, string target = " ", string replace = "");

//(1) 답
//string erase(string src) {
//	int removeIndex;
//	while (true) {
//		int removeIndex = src.find(' ');
//		if (removeIndex == -1) break;
//
//		src.erase(removeIndex, 1);
//	}
//
//	return src;
//}
//string erase(string src, string rm) {
//	int removeIndex =-2;
//	while (true) {
//		removeIndex = src.find(rm);
//		if (removeIndex == -1) break;
//
//		src.erase(removeIndex, 1);
//	}
//
//	return src;
//}
//string erase(string src, string target, string replace) {
//	int replaceIndex = -2;
//	while (true) {
//		replaceIndex = src.find(target);
//		if (replaceIndex == -1) break;
//
//		src.replace(replaceIndex, target.size(), replace);
//	}
//	return src;
//}

//(2) 답
string erase(string src, string target, string replace) {
	int removeIndex = -2;
	int replaceIndex = -2;

	if (replace.empty()) {
		while (true) {
			removeIndex = src.find(target);
			if (removeIndex == -1) break;

			src.erase(removeIndex, target.size());
		}
	}
	else {
		while (true) {
			replaceIndex = src.find(target);
			if (replaceIndex == -1) break;

			src.replace(replaceIndex, target.size(), replace);
		}
	}
	return src;
}

int main() {
	string a = erase("Hello   world,  Yaho");
	cout << "모든 빈 칸 지운 결과\t" << a << endl;
	string b = erase("Hello   world,  Yaho", "ll");
	cout << "모든 ll을 지운 결과\t" << b << endl;
	string c = erase("Hello   world,  Yaho", "o", "77");
	cout << "모든 o를 77로 바꾼 결과\t" << c << endl;
}

//2026/04/16 15:40~16:10, 18:10~18:50, 30+40=70분, string 멤버 함수 연습 필요 - 매개변수, 반환값 -
