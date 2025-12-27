#include <iostream>

int main() {
	int sum = 0;
	int i;
	for (i = 0; i <= 10; i++) sum += i;
	std::cout << "1에서 " << (i-1) << "까지 더한 결과는 " << sum << "입니다\n";
	return 0;
}