#include <iostream>
using namespace std;

int main(void) {
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}

/*
	namespace 예약어를 using과 함께 사용하면 네임스페이스를 생략한 채로 해당 네임스페이스의 모든 객체를 가져다 사용할 수 있다.
*/