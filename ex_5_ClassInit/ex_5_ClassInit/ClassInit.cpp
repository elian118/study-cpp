#include <iostream>
using namespace std;

class SoSimple {
private:
	int num1;
	int num2;
public:
	// 일반적인 매개변수 생성자
	SoSimple(int n1, int n2) : num1(n1), num2(n2) {}
	// 복사 생성자
	SoSimple(SoSimple& copy): num1(copy.num1), num2(copy.num2) {
		cout << "Called SoSimple(SoSimple & Copy)" << endl;
	}
	/* 복사 생성자의 자동 복사를 막는 예시 - explicit 사용
	explicit SoSimple(SoSimple& copy): num1(copy.num1), num2(copy.num2) {
		cout << "Called SoSimple(SoSimple & Copy)" << endl;
	}
	*/

	void ShowSimpleData() {
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main(void) {
	SoSimple sim1(15, 30);					// 매개변수로 정수 둘을 받는 이니셜라이저 생성자 호출
	cout << "생성 및 초기화 직전" << endl;
	SoSimple sim2 = sim1;					// 매개변수로 SoSimple 자료형을 받는 이니셜라이저 생성자 호출 → 복사 생성자 호출
	cout << "생성 및 초기화 직후" << endl;
	sim2.ShowSimpleData();

	return 0;
}

/*
	복사 생성자는 자료형이 같은 정보를 인자로 받아 생성되는 형식의 생성자를 의미

	클래스 안에 복사생성자가 선언돼 있다면
	단순히 아래와 같이 대입하는 코드만으로도 복사 생성자를 호출해 새로운 클론 sim2를 만들 수 있다.

	SoSimple sim2 = sim1;

	C++은 이렇게 특별한 부가 코드 없이도 자동으로 복사생성자를 호출하도록 설정돼 있는데,
	만약 C++의 이런 자동 복사생성자 호출을 방지하고 싶다면 아래와 같이 복사생성자 앞에 explicit을 사용하면 된다.

	explicit SoSimple(SoSimple& copy): num1(copy.num1), num2(copy.num2) {
		cout << "Called SoSimple(SoSimple & Copy)" << endl;
	}
*/