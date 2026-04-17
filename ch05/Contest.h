#ifndef CONTEST_H
#define CONTEST_H
#include <iostream>
using namespace std;

class Contest {
	string* teams;
	int* scores;
	int size;
public:
	Contest(int size);
	Contest(const Contest& src);
	~Contest();
	void read();
	int getSize() {
		return size;
	}
	int getScore(int index) {
		return scores[index];
	}
	string getTeam(int index) {
		return teams[index];
	}
};
#endif