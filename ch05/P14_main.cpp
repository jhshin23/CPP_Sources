#include "Contest.h"
string decideGoldAward(Contest codingTest);

string decideGoldAward(Contest codingTest) {
	int size = codingTest.getSize();
	int winnerIndex = 0;
	int winnerScore = codingTest.getScore(0);
	for(int i = 1; i < size; i++) {
		int checkingScore = codingTest.getScore(i);
		if (winnerScore < checkingScore) {
			winnerScore = checkingScore;
			winnerIndex = i;
		}
	}
	return codingTest.getTeam(winnerIndex);
}

int main() {
	Contest codingTest(6);
	codingTest.read();
	//마술 66 탱고 72 황치즈 98 지운 54 현경 95 무빙 91 
	string team = decideGoldAward(codingTest);
	cout << "금상은 " << team << "팀입니다." << endl;

}

//2026/04/17 15:30 ~ 16:00, 30분