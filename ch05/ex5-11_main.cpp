#include "Person.h"
#include <iostream>
#include <cstring>
using namespace std;
void f(Person person) {
	person.changeName("dummy");
}

Person g() {
	Person mother(2, "Jane"); 
	return mother;
}

int main() {
	Person father(1, "Kitae");
	Person son = father;
	f(father);
	g();
	Person p = g(); 

	//Person daughter(father);
	cout << "딸 객체 생성 직후--" << endl;
	//father.show();
	//daughter.show(); 

	//father.pr(father); //자동 복사생성자로는 오류가 난다

	//daughter.changeName("Grace");
	//cout << "딸 객체 이름 변경 직후--" << endl;
	//father.show();
	//daughter.show();

	return 0;

}