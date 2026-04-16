#include "GameBoard.h"

int main() {
	GameBoard board;
	board.increase();
	board.increase(20);
	board.increase(30, "청군");
	board.increase(40, "백군");
	board.show();
	board.show("청군");
}

//2026/04/16 20:10~50, 40분, 팀이름 디폴트값 고민 -> 주석 역할 문자열을 넣기로 함.