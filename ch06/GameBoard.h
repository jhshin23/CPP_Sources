#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include <iostream>
using namespace std;

class GameBoard {
	int scoreB = 0, scoreW = 0;
public:
	GameBoard() {};
	//(1) 답
	//void increase();
	//void increase(int score);
	//void increase(int score, string team);
	//void show();
	//void show(string team);

	//(2) 답
	void increase(int score = 10, string team = "청군과 백군");
	void show(string team = "청군과 백군");
};
#endif