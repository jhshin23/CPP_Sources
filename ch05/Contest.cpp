#include "Contest.h"

Contest::Contest(int size) {
	this->size = size;
	teams = new string[size];
	scores = new int[size];
}
Contest::Contest(const Contest& src) {
	this->size = src.size;
	this->teams = new string[size];
	this->scores = new int[size];
	for (int i = 0; i < size; i++) {
		this->teams[i] = src.teams[i];
		this->scores[i] = src.scores[i];
	}
}
Contest::~Contest() {
	delete[] teams;
	delete[] scores;
}
void Contest::read() {
	cout << size << "개 입력>>";
	for (int i = 0; i < size; i++) {
		cin >> teams[i] >> scores[i];
	}
}
