#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0): xpos(x), ypos(y) { }
	void ShowPosition() const {
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	// 전위 증가
	Point& operator++() {
		xpos += 1;
		ypos += 1;
		return *this;
	}
	// 후위 증가: 원본 값이 변경되면 안되므로 const로 선언
	const Point operator++(int) {
		const Point retobj(xpos, ypos); // const Point retobj(*this); // 복사생성자 호출 방식도 가능
		xpos += 1;
		ypos += 1;
		return retobj; // 값이 변형되기 이전 상태의 객체 반환
	}
	// 아래 전역함수 형태로 전위/후위 감소 처리를 위한 선언
	friend Point& operator--(Point& ref);
	friend const Point operator--(Point& ref, int);
};
// 전역함수 형태로 접근하도록 추가 선언
// 전위 감소
Point& operator--(Point& ref) {
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}
// 후위 감소
const Point operator--(Point& ref, int) {
	const Point retobj(ref);	// const 객체
	ref.xpos -= 1;
	ref.ypos -= 1;
	return retobj; // 값이 변형되기 이전 상태의 객체 반환
}

int main(void) {
	Point pos(3, 5);
	Point cpy;
	cpy = pos--;
	cpy.ShowPosition();
	pos.ShowPosition();

	cpy = pos++;
	cpy.ShowPosition();
	pos.ShowPosition();

	return 0;
}

/*
	전위 후위 연산자 오버로드는 의도대로 값이 반환될 수 있도록 함수를 정의한 기발한 코드에 주목하면 된다.
*/