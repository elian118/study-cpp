#include <iostream>
#include "Rectangle.h"
using namespace std;

// 매개변수 생성자
Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2): upLeft(x1, y1), lowRight(x2, y2) { } // 멤버 이니셜라이저 → 매개변수 생성자 호출 시 멤버변수(또는 상수) 선언과 동시에 초기화를 가능케 한다.

void Rectangle::ShowRecInfo() const {
	cout << "좌 상단" << '[' << upLeft.GetX() << ", ";
	cout << upLeft.GetY() << ']' << endl;
	cout << "우 하단" << '[' << upLeft.GetX() << ", ";
	cout << lowRight.GetY() << ']' << endl << endl;
}

/*
	Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2): upLeft(x1, y1), lowRight(x2, y2) { }

	위 코드는 아래 의미를 가지고 있다.

	객체 upLeft 생성과정에서 x1과 y1을 인자로 전달받는 생성자 호출
	객체 lowRight 생성과정에서 x2와 y2를 인자로 전달받는 생성자 호출

	헤더인 Rectangle.h 를 보면 아래와 같이 upLeft, lowRight 또한 Point 객체(클래스)로 생성된 Rectangle의 멤버 변수임을 알 수 있다.
	즉, 먼저 upLeft, lowRight를 Point 생성자를 호출(초기화)해 Rectangle을 온전히 생성하라는 의미다.

	class Rectangle {
		private:
			Point upLeft;
			Point lowRight;
		public:
			Rectangle(const int& x1, const int& y, const int& x2, const int& y2); // 매개변수 생성자 → 이걸 선언 안 하면 매개변수가 없는 기본 생성자가 자동 생성된다.
			void ShowRecInfo() const;
	};

	꼭 객체가 아니어도 된다. 멤버 이니셜라이저는 객체가 아닌 멤버 초기화에 사용해도 문제가 없다.
	코드가 길어지는데 번거롭긴 하지만 멤버 이니셜라이저는 아래와 같은 이점이 있다고 한다.

	1. 헤더 파일을 들여다보지 않아도 초기화 대상을 명확히 인식 가능
	2. 성능에 약간의 이점 있음(선언과 동시에 초기화이므로)

	이 같은 '선언과 동시에 초기화'하는 멤버 이니셜라이저의 특징은 멤버변수로 참조자를 선언할 수 있게 하는 원리이기도 하다.
	
*/