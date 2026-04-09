#include <iostream>
using namespace std;

class Memo { //1건의 메모 객체를 만드는 클래스
	string date, content; //"월:일", "어떤 날인지에 대한 내용"
public:
	Memo(string d, string c); //"월:일", "내용" 두 가지를 저장하는 객체 생성
	void show() { //날짜와 내용 표시
		cout << date << ", " << content << endl;
	}
	bool isSameDate(Memo m); //두 메모 객체의 날짜가 같은지 다른지 확인
	string getDate() { //날짜를 알려줌
		return date; 
	}
	string getContent() { //내용을 알려줌
		return content;
	}
};

Memo::Memo(string d, string c) { //유일한 생성자 함수, 날짜와 내용을 항상 받아서 저장
	date = d;
	content = c;
}
bool Memo::isSameDate(Memo m) { //이 객체의 날짜와 매개변수 객체의 날짜가 같으면 true 다르면 false를 리턴
	string d = m.getDate();
	if (date == d)
		return true;
	else
		return false;
}

int main() {
	Memo a("1:20", "동계 프로그래밍 캠프");
	Memo b("2:20", "김경미 독일 송별회");
	Memo c("2:21", "박채원 졸업식, 대학원 간대");

	a.show();
	if (a.isSameDate(b)) 
		cout << "같은 날입니다." << endl;
	else 
		cout << "다른 날입니다." << endl;
	cout << b.getDate() << "에 " << b.getContent() << endl;
}