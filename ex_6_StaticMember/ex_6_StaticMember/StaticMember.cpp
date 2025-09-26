#include <iostream>
using namespace std;

class SoSimple {
	private: static int simObjCnt;
	public:
		SoSimple() {
			simObjCnt++;
			cout << simObjCnt << "번째 SoSimple 객체" << endl;
		}
};
int SoSimple::simObjCnt = 0;

class SoComplex {
	private: static int cmxObjCnt;
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
int SoComplex::cmxObjCnt = 0;

int main(void) {
	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2 = cmx1;
	SoComplex();

	return 0;
}

/*
	객체지향 프로그래밍에서 클래스는 호출자의 입출입 통제가 가능하므로 출처 추적에도 용이하다.

	클래스 안에서 static으로 정적변수를 선언한다면 아무데서나 쉽게 접근해 전역변수를 건드리는 상황을 미연에 방지할 수 있다.
	SoComplex를 모르면 cmxObjCnt에 접근할 수 없기 때문이다.

	혹시라도 알 수 없는 원인으로 전역변수 정보가 변경됐다면, 
	SoComplex::cmxObjCnt 이렇게 검색해 전역변수에 영향을 줄 수 있는 모든 코드들의 추적이 가능하므로 관리도 쉬워진다.

	그리고 방금 알 수 있듯이, static 멤버 변수나 함수는 객체명이 아니라 클래스명으로 접근해야 한다.
*/