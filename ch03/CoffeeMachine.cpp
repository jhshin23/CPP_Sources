#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee;
	int water; 
	int sugar;
public:
	CoffeeMachine(int, int, int);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void show();
	void fill() {
		coffee = water = sugar = 10;
	}
};
//구현부
CoffeeMachine::CoffeeMachine(int c, int w, int s) {
	coffee = c;
	water = w;
	sugar = s;
}
void CoffeeMachine::drinkEspresso() {
	if (coffee < 1 || water < 1) {
		cout << "원료가 부족합니다. 에스프레소 다음에 오세요.~~~~" << endl;
		return;
	}
	else {
		coffee -= 1;
		water -= 1;
		cout << "에스프레소 나왔습니다.~~~~" << endl;
	}
}
void CoffeeMachine::drinkAmericano() {
	if (coffee < 1 || water < 2) {//소비량은 교재 주석에 맞춤
		cout << "원료가 부족합니다. 아메리카노 다음에 오세요.~~~~" << endl;
		return;
	}
	else {
		coffee -= 1;
		water -= 2;
		cout << "아메리카노 나왔습니다.~~~~" << endl;
	}
}
void CoffeeMachine::drinkSugarCoffee() {
	if (coffee < 1 || water < 2 || sugar < 1) {
		cout << "원료가 부족합니다. 설탕 커피 다음에 오세요.~~~~" << endl;
		return;
	}
	else {
		coffee -= 1;
		water -= 2;
		sugar -= 1;
		cout << "설탕 커피 나왔습니다.~~~~" << endl;
	}
}
void CoffeeMachine::show() {
	cout << "[머신 상태] ";
	cout << "커피: " << coffee << "\t";
	cout << "물: " << water << "\t";
	cout << "설탕: " << sugar << endl;
}

int main() {
	CoffeeMachine java(2, 3, 1);
	//java.drinkEspresso();
	//java.show();
	//java.drinkAmericano();
	//java.show();
	//java.drinkSugarCoffee();
	//java.show();
	//java.fill();
	//java.show();
	while (true) {
		cout << "에스프레소: 1 \t 아메리카노: 2\t 설탕 커피: 3\t show: 4\t fill: 5\t 떠나기: 6" << endl;
		cout << ">>";
		int menu;
		cin >> menu;
		switch (menu) {
		case 1:
			java.drinkEspresso();
			break;
		case 2:
			java.drinkAmericano();
			break;
		case 3:
			java.drinkSugarCoffee();
			break;
		case 4:
			java.show();
			break;
		case 5:
			java.fill();
			break;
		case 6:
			cout << "안녕";
			return 0;
		}
	}
}