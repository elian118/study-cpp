#include <iostream>
int Adder(int num1 = 1, int num2 = 2); // 컴파일 특성 상 함수 인자의 기본값은 선언부에만 표현 가능

int main(void) {
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;

	return 0;
}

int Adder(int num1, int num2) {
	return num1 + num2;
}