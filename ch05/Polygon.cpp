#include <iostream> //C++ 표준 입출력 라이브러리의 iostream 헤더 파일을 소스 파일에 삽입
#include <string> //C++ 표준 라이브러리 클래스, 문자열을 다루기 위해 사용
#include "Polygon.h" //개발자 작성 헤더 파일
using namespace std; //표준 이름 공간에 선언된 모든 이름에 대한 범위 지정 연산자를 생략한다


Polygon::Polygon(int size) {
	this->size = size; //점의 개수 초기화
	xList = new int[size]; //점의 개수만큼의 x, y 좌표 각각의 정수 배열 동적 할당
	if (!xList) {
		cout << "메모리를 할당할 수 없습니다.";
		return; 
	}
	yList = new int[size];
	if (!yList) {
		cout << "메모리를 할당할 수 없습니다.";
		return;
	}
	for (int i = 0; i < size; i++) { // 0으로 초기화
		xList[i] = 0;
		yList[i] = 0;
	}
}

Polygon::~Polygon() {
	if (!xList) {}
	else delete [] xList; //할당 해제

	if (!yList) {}
	else delete [] yList;
}

void Polygon::read() { //점의 개수만큼 읽어들이는 함수
	if (!(xList && yList)) {
		cout << "메모리를 할당할 수 없습니다.";
		return; //메모리 할당 실패했다면 바로 끝냄
	}
	else {
		bool inputBreakFlag = true;
		string xyInput; //점의 좌표 입력을 모두 저장할 한 개의 문자열 
		while (inputBreakFlag) { //정확히 입력될 때까지 반복
			cout << "아래에 x, y 값으로 " << size << "개의 점을 입력하세요." << endl;
			getline(cin, xyInput, '\n'); //x, y값 입력받기
			int startIndex = 0; //문자열 내에 검색할 시작 인덱스
			int spaceIdx; //빈칸이 있는 인덱스
			int filledXYCnt = 0; //좌표가 다 채워졌는지 세기
			for (int i = 0; i < (size*2); i++) { //점(x, y) 좌표를 채우기
				spaceIdx = xyInput.find(' ', startIndex); //띄어쓰기가 든 인덱스 찾기
				int count = spaceIdx - startIndex; //서브스트링으로 자를 문자 개수
				if (count == 0) {//연속 띄어쓰기된 인덱스 건너뛰기
					i--; //이번 반복 무르기
					startIndex++; //다음 인덱스에서부터 찾기
					continue; //다음 반복으로 이어가기
				}
				string part = xyInput.substr(startIndex, count); //숫자 추정 부분 문자열
				//stoi()가 숫자가 아닌 인수일 경우 exception, try catch가 어려워서 다르게 해결하려고 함
				bool isPartNum = true; //string part가 숫자라고 가정하고 확인 시작
				for (int i = 0; i < part.size(); i++) { //문자열이 정수인지 한 글자씩 확인
					char a = part.at(i); //문자열의 i번째 글자를 저장
					//첫 글자가 '-'이고 다음 글자가 있으면 마이너스 기호일 수 있다
					if (i == 0 && a == '-' && part.size() > 1) {
						continue; //마이너스 기호는 허용
					}
					if (a < '0' || a > '9') isPartNum = false; //변수 a가 숫자가 아니라고 판정
				}
				if (isPartNum) {
					int xyInt = stoi(part); //앞에서 숫자임을 확인했으므로 바로 int로 변환
					if (i % 2 == 0) xList[i/2] = xyInt; //짝수 i는 x, 홀수 i는 y좌표로 번갈아 저장
					else yList[i/2] = xyInt;
					filledXYCnt++; //갱신된 좌표 리스트 개수 세어두기
					if (filledXYCnt == (size*2)) inputBreakFlag = false; //xy 좌표 다 쓰면 while 탈출
				}
				else { // 입력이 정수가 아니면 처음부터 다시 입력받기
					cout << "점의 위치를 정수로 입력해주세요." << endl;
					break;
				}
				startIndex = spaceIdx + 1; //검색을 시작할 인덱스 전진시킴
			}
		}
	}
}

bool Polygon::get(int n, int& x, int& y) { //점의 위치를 검증하고 좌표를 알려주는 함수
	if (!(xList && yList)) {
		cout << "메모리를 할당할 수 없습니다.";
		return false; //메모리 할당 실패했다면 바로 끝냄
	}
	else {
		int index = n - 1;
		if (index < 0 || index >= size) return false;
		else {
			x = xList[index];
			y = yList[index];
			return true;
		}
	}
}