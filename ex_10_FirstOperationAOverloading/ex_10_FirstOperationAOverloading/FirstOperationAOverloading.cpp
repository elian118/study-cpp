#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	void ShowPosition() const {
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}
	// 연산자 오버로딩은 피연산자에 대한 연산의 결과로 반환될 결과를 인자로 전달하는 방법이다. 따라서, 오버로딩에 피연산자 객체를 지칭하는 무언가가 꼭 필요하다.
	// 아래에서 Point 자료형 operator는 피연산자 객체이고 여기다 ref 객체를 더한다고 선언됐다.
	// operator + (const Point& ref) 자체는 해당 연산을 실행하는 함수에 대한 선언이라 봐도 좋다. 실제로 이 함수는 pos1.operator + (pos2) 를 받아 해석하고 계산하고 있다.
	// 연산이 가능해야 하므로 연산에 사용되는 객체 또한 자료형이 같다는 사실도 주목해야 한다.
	Point operator + (const Point& ref) {
		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		return pos;
	}
};

int main(void) {
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator + (pos2);
	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();

	return 0;
}

/*
	연산자 오버로딩은 만능이 아니다.

	.					멤버 접근 연산자
	.*					멤버 포인터 연산자
	::					범위 지정 연산자
	?:					조건 연산자
	sizeof				바이트 단위 크기 계산
	typeid				RTTI 관련 연산자
	static_cast			형변환 연산자 
	dynamic_cast		형변환 연산자 
	const_cast			형변환 연산자 
	reinterpret_cast	형변환 연산자 
	
	등등의 연산자는 오버로드가 불가하다.

	아래는 멤버함수 기반으로만 오버로딩이 가능한 연산자들이다.

	=					대입 연산자
	()					함수 호출 연산자
	[]					배열 접근 연산자(인덱스 연산자)
	->					멤버 접근을 위한 포인터 연산자

	이들은 객체를 대상으로 진행해야 의미가 통하는 연산자들이므로 멤버함수 기반으로만 연산자 오버로딩을 허용한다.
*/