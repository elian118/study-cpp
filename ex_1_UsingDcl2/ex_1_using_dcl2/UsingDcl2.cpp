#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;

	return 0;
}

/*
	using: 반복되는 네임스페이스 사용을 생략하고자 할 때 유용하다.

	std::cout → cout
*/