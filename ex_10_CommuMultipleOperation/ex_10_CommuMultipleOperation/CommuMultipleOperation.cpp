#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) { }
	void ShowPosition() const {
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point operator * (int times) {
		Point pos(xpos * times, ypos * times);
		return pos;
	}
	friend Point operator * (int times, Point& ref);
};

// 인자를 받아서 위치를 바꾼다. 연산자 오버로딩이 되도록 먼저 앞에 숫자를 뒤로 이항시켜주는 전역 함수라고 생각하면 쉽다.
Point operator * (int times, Point& ref) {
	return ref * times;
}

int main(void) {
	Point pos(1, 2);
	Point cpy;

	cpy = 3 * pos;
	cpy.ShowPosition();

	cpy = 2 * pos * 3;
	cpy.ShowPosition();

	return 0;
}

/*
	위 예제는 cpy = 3 * pos; 처럼 숫자가 앞에 있는 경우 연산자 오버로딩이 어떻게 구현 가능한지 보여준다.
	이 같은 형태는 전역 함수 기반으로 연산자를 오버로딩해야 한다.
*/