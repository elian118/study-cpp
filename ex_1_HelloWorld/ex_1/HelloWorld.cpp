#include <iostream>

int main(void) {
	int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';					// << std::endl 없으면 개행하지 않는다.
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}