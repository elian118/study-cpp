#include <iostream>
using namespace std;

void SwapByRef2(int& ref1, int& ref2) {
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;

}

int main(void) {
	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;

	return 0;
}

/*
	별칭을 의미하는 참조자 '&'는 함수 매개변수 선언에 적합하다

	함수마다 함수 내부에서만 사용되는 별칭으로 인자로 넘겨진 값을 다루는 게 가능하기 때문이다.
	복잡한 포인터와 어드레스 개념을 사용할 필요 없이 혼동도 적다.

	인자로 받은 변수 원본의 변경을 원치 않을 경우, 앞에 const를 붙여주면 된다.

	func(const int& ref) { ... }

	단, addressOf 로서 참조자에 주소값으로 할당하기 위해 사용하는 연산자 '&'와 모양이 같으므로 의미상 혼동에 주의가 필요하다.

	int* pA = &a;	// 포인터에는 주소값만 넣을 수 있다.
	int& a = b;		// 참조자는 주소가 아니라 실제 값을 의미하는 것이 필요
*/