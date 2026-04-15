#include <iostream> //C++ 표준 입출력 라이브러리의 iostream 헤더 파일을 소스 파일에 삽입
#include <string> //C++ 표준 라이브러리 클래스, 문자열을 다루기 위해 사용
#include "Fitness.h" //개발자 작성 헤더 파일
using namespace std; //표준 이름 공간에 선언된 모든 이름에 대한 범위 지정 연산자를 생략한다

int main() {
	Fitness altong;
	altong.arrive("남", 3).arrive("여", 6).arrive("남", 9); //남자회원수 12, 여자회원수 6

	int m = 0, w = 0;
	altong.count("남", m); //m에 남자 회원 수 얻어오기
	altong.count("여", w); //w에 여자 회원 수 얻어오기
	cout << "남자 회원" << m << "명, 여자 회원" << w << "명" << endl;

	altong.at("남") = 100; //남자 회원 수를 100으로 설정
	m = altong.at("남"); //남자 회원 수를 m에 저장
	w = altong.at("여"); //남자 회원 수를 w에 저장
	cout << "남자 회원" << m << "명, 여자 회원" << w << "명" << endl;
}
 

/*
26/04/14
10:40 ~ 11:00 20분, 파일 생성, main.cpp 타이핑, Fitness.h 작성
11:00 ~ 11:30,
12:00 ~ 12:30 1시간, Fitness.cpp 작성
12:30 ~ 13:20 50분, 주석 작성
*/