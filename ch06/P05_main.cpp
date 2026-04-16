#include "Vector.h"

int main() {
	Vector x;
	Vector y(10, 8);
	x.show();
	y.show();
	y.show(3);

}

//2026/04/16 19:00~20:00, 1시간, 오버로드 함수를 합칠 때 if(매개변수특징) 쓰는 선택이 맞는지 고민 