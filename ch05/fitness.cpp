#include <iostream> //C++ 표준 입출력 라이브러리의 iostream 헤더 파일을 소스 파일에 삽입
#include <string> //C++ 표준 라이브러리 클래스, 문자열을 다루기 위해 사용
#include "Fitness.h" //개발자 작성 헤더 파일
using namespace std; //표준 이름 공간에 선언된 모든 이름에 대한 범위 지정 연산자를 생략한다

//성별 표기 문자열과 새 회원수를 받아서 그 성별의 회원수에 더하기. 회원수가 더해진 상태의 객체 자신에 대한 참조를 반환
Fitness& Fitness::arrive(string gender, int count) {
	this->at(gender) += count; //현재 객체의 gender에 해당하는 회원수에 count를 더함
	return *this; //현재 객체에 대한 참조 리턴
}

//성별 표기 문자열과 정수형 참조 매개변수를 받아서 그 성별의 회원수로 참조 매개변수를 갱신
void Fitness::count(string gender, int& mNum) {
	mNum = this->at(gender); //매개변수에 현재 객체의 해당 gender의 회원수 배열 원소의 참조 변수의 값을 덮어씀
}

//성별 표기 문자열을 받아서 그 성별의 member(회원수)의 참조 변수를 반환
int& Fitness::at(string gender) {
	for (int i = 0; i < GENDER_SIZE; i++) { //성별 구분 개수만큼 반복
		if (genderCategory[i] == gender) { //gender가 성별 구분 문자열 배열의 원소와 같으면
			return member[i]; //같은 인덱스의 회원수 배열 원소의 참조 변수를 반환
		}
	}
}
