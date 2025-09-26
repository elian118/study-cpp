#include <iostream>
using namespace std;

int& RefRetFuncOne(int& ref) {
	ref++;
	return ref; // 참조자 반환
}

int main(void) {
	int num1 = 1;
	int& num2 = RefRetFuncOne(num1); // 반환한 참조자를 참조자 num2에 저장

	num1++; // 참조값 증가
	num2++; // 참조값 증가
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}

/*
	함수 반환형이 참조이고 반환도 참조로 할 때

	1) 참조자가 받을 경우

	이 반환 값을 받는 참조자 입장에선 같은 값을 참조하는 것이나 다름 없다.
	반환값을 받은 변수를 변경해도 원본을 변경해도 동일시 된다.

	2) 참조자가 아닌 변수가 받는 경우

	변수는 원본을 값을 복사해 저장한다.
	원본과 변수는 복사된 시점부터 서로 독립된 메모리에 저장된 값이므로 어느 한 곳이 변경되도 서로 영향을 주지 않는다.
*/