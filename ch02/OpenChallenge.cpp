#include <iostream>
#include <string>
#include <vector>
using namespace std;

void start();
int getRomeo();
int getJuliet();
string judge(int r, int j);
void printResult(string result);
vector<string> rules = { "가위", "바위", "보" };

void start() {
	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요.\n";
	printResult(judge(getRomeo(), getJuliet()));
}
int getRomeo() {
	while (true) {
		string s;
		cout << "로미오>>";
		cin >> s;
		for (int i = 0; i < 3; i++) {
			if (s.compare(rules[i]) == 0)
				return i;
		}
		cout << "가위, 바위, 보 중에서 입력하세요.\n";
	}
}
int getJuliet() {
	while (true) {
		string s;
		cout << "줄리엣>>";
		cin >> s;
		for (int i = 0; i < 3; i++) {
			if (s.compare(rules[i]) == 0)
				return i;
		}
		cout << "가위, 바위, 보 중에서 입력하세요.\n";
	}
}
string judge(int r, int j) {
	switch (r - j) {
	case 1:
	case -2:
		return "로미오가 이겼습니다.";
	case -1:
	case 2:
		return "줄리엣이 이겼습니다.";
	case 0:
		return "비겼습니다.";
	default:
		return "오류";
	}
	/*
	앞이 이김: 02 10 22 -2 1 1
	앞이 짐: 01 12 20 -1 -1 2
	*/

}
void printResult(string result) {
	cout << result;
}

int main() {
	start();
}