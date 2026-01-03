#include <iostream>
using namespace std;
#define NUM 5

int main() {
	cout << "5개의 실수를 입력하라";
	double input[NUM];
	double largest;

	for (int i = 0; i < NUM; i++) {
		cin >> input[i];
		if (!cin) { //cin이 true로 평가되지 않음
			cin.clear();//cin의 !true 상태 해제
			cin.ignore(10000, '\n');//만개의 문자를 엔터전까지 버림, 엔터도 버림
			cout << "5개의 실수를 입력하라";
			i = -1;
			continue;
		}
	}

	largest = input[0];
	for (int i = 1; i < NUM; i++) {
		if (largest <= input[i]) largest = input[i];
	}
	cout << "제일 큰 수 = " << largest;
}