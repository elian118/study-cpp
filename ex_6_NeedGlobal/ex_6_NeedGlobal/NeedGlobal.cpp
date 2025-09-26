#include <iostream>
using namespace std;

int simObjCnt = 0;
int cmxObjCnt = 0;

class SoSimple {
	public:
		SoSimple() {
			simObjCnt++;
			cout << simObjCnt << "번째 SoSimple 객체" << endl;
		}
};

class SoComplex {
public:
	SoComplex() {
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
	SoComplex(SoComplex& copy) {
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};

int main(void) {
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();

	return 0;
}

/*
	위 예제는 static 없이 전역 변수를 사용하는 상황을 보여주고 있다.

	이런식의 전역변수 관리는 아무데서나 접근이 가능한 상태라 관리 포인트의 허점이 있다.
*/