#include "Collector.h"
double calcAvg(Collector c);

double calcAvg(Collector c) {
	double sum = 0;
	for (int i = 0; i < c.getSize(); i++) {
		sum += (double)c.get(i);
	}
	return sum / (double)c.getSize();
}

int main() {
	int temp[] = { 69, 70, 71, 72, 74 };
	Collector weight(4, temp);
	double avg = calcAvg(weight);
	weight.show();
	cout << "평균은 " << avg << endl;
}

/*
(2) 답: 외부함수 calcAvg에 클래스 객체가 인수로 복사됨. 
		얕은 복사라서 매개변수 객체의 포인터가 가리키는 배열이 원본의 배열과 주소가 같음
		함수 끝나면 소멸자가 매개변수 배열(=원본 배열)을 할당 해제시킴.
		배열은 읽을 수 없어지고 할당 해제할 메모리도 없어짐.
		소멸자에서 메모리 중복 반환 오류가 생김.
*/
//2026/04/17 15:00 ~ 15:30, 30분