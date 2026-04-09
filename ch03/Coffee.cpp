#include <iostream>
using namespace std;

/****** 
3/17 화 17:40~50 헤더/클래스/함수 선언부 작성
3/22 일 14:45~15:15 함수 구현부, 메인 작성
******/
class Coffee { //커피 객체 클래스
	int coffee, sugar, milk, water; //커피 객체를 이루는 4개의 재료
public:
	Coffee(); //재료량을 지정하지 않은 경우의 커피를 만듦
	Coffee(int c, int s, int m, int w); //재료량 조절해서 커피를 만듦
	void show(); //해당 커피 객체에 들어간 재료를 보여줌
};

Coffee::Coffee() { //재료 개수를 모르면 에스프레소를 만듦
	coffee = 10;
	sugar = milk = water = 0;
}
Coffee::Coffee(int c, int s, int m, int w) { //재료량이 주어지면 커스텀 커피를 만듦
	coffee = c;
	sugar = s;
	milk = m;
	water = w;
}

void Coffee::show() { //얼만큼의 재료로 커피를 만들었는지 화면에 표시
	cout << "coffee ";
	for (int i = 0; i < coffee; i++)
		cout << "*";
	cout << endl;
	cout << "sugar ";
	for (int i = 0; i < sugar; i++)
		cout << "*";
	cout << endl;
	cout << "milk ";	
	for (int i = 0; i < milk; i++)
		cout << "*";
	cout << endl;
	cout << "water ";	
	for (int i = 0; i < water; i++)
		cout << "*";
	cout << endl;
}

int main() {
	Coffee espresso; //커피 10, 설탕 0, 우유 0, 물 0으로 만든 커피
	Coffee americano(5, 0, 0, 10); //커피 5, 물 10으로 만든 커피
	Coffee cappucchino(5, 1, 5, 2);  //커피 5, 설탕 1, 우유 5, 물 2으로 만든 커피
	Coffee mySweet(3, 7, 5, 5);  //커피 3, 설탕 7, 우유 5, 물 5으로 만든 커피

	espresso.show();
	cout << endl;
	mySweet.show();
}