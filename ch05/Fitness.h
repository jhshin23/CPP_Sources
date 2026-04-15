#ifndef FITNESS_H //조건 컴파일문으로 클래스 중복선언 방지
#define FITNESS_H
#define GENDER_SIZE 2 //성별 구분 개수, 남녀

#include <iostream> //C++ 표준 입출력 라이브러리의 iostream 헤더 파일을 소스 파일에 삽입
#include <string> //C++ 표준 라이브러리 클래스, 문자열을 다루기 위해 사용
using namespace std; //표준 이름 공간에 선언된 모든 이름에 대한 범위 지정 연산자를 생략한다

class Fitness {
	string genderCategory[GENDER_SIZE] = {"여", "남"}; //성별 구분 표기 문자열
	int member[GENDER_SIZE] = { 0 }; //성별 회원수. 0명으로 초기화
public:
	//생성자 함수. 
	Fitness() {}  

	//성별 표기 문자열과 새 회원수를 받아서 그 성별의 회원수에 더하기. 회원수가 더해진 상태의 객체 자신에 대한 참조를 반환
	Fitness& arrive(string gender, int count); 

	//성별 표기 문자열과 정수형 참조 매개변수를 받아서 그 성별의 회원수로 참조 매개변수를 갱신
	void count(string gender, int& mNum); 

	//성별 표기 문자열을 받아서 그 성별의 member(회원수)의 참조 변수를 반환
	int& at(string gender); 
};
#endif 
