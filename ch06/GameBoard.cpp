#include "GameBoard.h"

//(1) 답
//void GameBoard::increase() {
//	scoreB += 10;
//	scoreW += 10;
//}
//void GameBoard::increase(int score) {
//	scoreB += score;
//	scoreW += score;
//}
//void GameBoard::increase(int score, string team) {
//	if (team == "청군")
//		scoreB += score;
//	else if (team == "백군")
//		scoreW += score;
//	else
//		cout << "\"청군\" / \"백군\"만 득점할 수 있습니다." << endl;
//}
//void GameBoard::show() {
//	cout << "청군: " << scoreB << ", " << "백군: " << scoreW << endl;
//}
//void GameBoard::show(string team) {
//	if (team == "청군")
//		cout << "청군: " << scoreB << endl;
//	else if (team == "백군")
//		cout << "백군: " << scoreW << endl;
//	else
//		cout << "\"청군\" / \"백군\"만 득점할 수 있습니다." << endl;
//
//}

//(2) 답
void GameBoard::increase(int score, string team) {
	if (team == "청군과 백군") {
		scoreB += score;
		scoreW += score;
	}
	else if (team == "청군")
		scoreB += score;
	else if (team == "백군")
		scoreW += score;
	else
		cout << "\"청군\" / \"백군\"만 조회할 수 있습니다." << endl;
}

void GameBoard::show(string team) {
	if (team == "청군과 백군") 
		cout << "청군: " << scoreB << ", " << "백군: " << scoreW << endl;
	else if (team == "청군")
		cout << "청군: " << scoreB << endl;
	else if (team == "백군")
		cout << "백군: " << scoreW << endl;
	else
		cout << "\"청군\" / \"백군\"만 득점할 수 있습니다." << endl;
}
